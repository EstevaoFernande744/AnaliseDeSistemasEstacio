/*
    Chess Moves - Versão Organizada e Comentada em Português

    VISÃO GERAL
    -----------
    - Programa de console que simula movimentos das peças: Cavalo (Horse),
      Bispo (Bishop), Torre (Rook) e Rainha (Queen).
    - O fluxo é sempre: main() -> selectPieces() -> moveXxx().
    - Não usamos posição absoluta (linha/coluna). Em vez disso, perguntamos
      se a peça está tocando alguma borda do tabuleiro (esquerda, cima, direita, baixo).
      Isso serve para limitar os movimentos possíveis.

    MODELO DE BORDAS
    ----------------
    - Se a peça está encostada numa borda, não pode mover-se na direção daquela borda.
      Exemplo: se está na borda esquerda, não pode mover-se para a esquerda.
    - Se está num canto (2 bordas), não pode mover-se para nenhum dos lados bloqueados,
      nem em diagonais que incluam esses lados.
    - Nos demais casos, como não sabemos a posição exata, consideramos que pode andar
      até N-1 casas (7 num tabuleiro 8x8).

    EXPERIÊNCIA DO USUÁRIO
    ----------------------
    - Todas as saídas estão em inglês.
    - O cavalo imprime exatamente:
        move of horse:
        left
        left
        down
    - Torre, Bispo e Rainha imprimem passo a passo, numerado:
        1) rook moved left.
        2) rook moved left.
        ...
    - Se o usuário pedir mais casas do que permitido, mostramos um aviso e
      executamos apenas até o limite possível.

    POR QUE USAR <ctype.h>?
    -----------------------
    - Para usar funções como tolower(), que convertem caracteres para minúsculo.
      Isso ajuda a normalizar as respostas do usuário (YES/yes/Yes -> "yes").
*/

#include <stdio.h>   // printf, scanf
#include <string.h>  // strcmp, strncpy
#include <ctype.h>   // tolower()

const int N = 8; // Tamanho do tabuleiro (8x8)

// ======================================================================
// FUNÇÕES AUXILIARES (UTILITÁRIOS)
// ======================================================================

/*
    clearBuffer
    -----------
    - Limpa o buffer de entrada (stdin) até encontrar '\n' ou EOF.
    - Evita que o "enter" pressionado em um scanf afete o próximo scanf.
*/
static void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

/*
    readInt
    -------
    - Lê um número inteiro entre minv e maxv.
    - Se o usuário digitar algo inválido, mostra erro e pergunta novamente.
*/
static int readInt(const char *prompt, int minv, int maxv) {
    int v;
    for (;;) {
        printf("%s", prompt);
        if (scanf("%d", &v) == 1 && v >= minv && v <= maxv) {
            clearBuffer();
            return v;
        }
        printf("entrada inválida. digite um número entre %d e %d.\n", minv, maxv);
        clearBuffer();
    }
}

/*
    readToken
    ---------
    - Lê uma string curta (até 7 caracteres) sem espaços.
    - Usada para perguntar "yes/no" sobre bordas.
*/

static void readToken(const char *prompt, char *dest, size_t cap) {
    (void)cap; // cap não usado porque scanf já limita pelo formato
    for (;;) {
        printf("%s", prompt);
        if (scanf("%7s", dest) == 1) {
            clearBuffer();
            return;
        }
        printf("entrada inválida.\n");
        clearBuffer();
    }
}

/*
    toLowerAscii
    ------------
    - Converte todos os caracteres da string para minúsculo.
    - Facilita a comparação (YES -> yes, Sim -> sim).
*/
static void toLowerAscii(char *s) {
    for (; *s; ++s) *s = (char)tolower((unsigned char)*s);
}

/*
    isYes / isNo
    ------------
    - Verifica se a string do usuário significa "sim" ou "não".
    - Aceita várias variações:
      - Sim: "yes", "y", "sim", "s"
      - Não: "no", "n", "not", "nao"
*/
static int isYes(const char *s) {
    if (!s) return 0;
    char b[8];
    strncpy(b, s, sizeof(b)-1);
    b[sizeof(b)-1] = 0;
    toLowerAscii(b);
    return (strcmp(b, "y")==0 || strcmp(b, "yes")==0 ||
            strcmp(b, "s")==0 || strcmp(b, "sim")==0);
}

static int isNo(const char *s) {
    if (!s) return 0;
    char b[8];
    strncpy(b, s, sizeof(b)-1);
    b[sizeof(b)-1] = 0;
    toLowerAscii(b);
    return (strcmp(b, "n")==0 || strcmp(b, "no")==0 ||
            strcmp(b, "not")==0 || strcmp(b, "nao")==0);
}

/*
    identifyEdges
    -------------
    - Marca em um vetor de 4 posições quais bordas a peça está encostada.
    - edgeFlags[0]=esquerda, [1]=cima, [2]=direita, [3]=baixo
*/
void identifyEdges(int edgeCount, int edgeDir1, int edgeDir2, int edgeFlags[4]) {
    for (int i=0; i<4; i++) edgeFlags[i] = 0;

    if (edgeCount >= 1 && edgeDir1 >= 1 && edgeDir1 <= 4)
        edgeFlags[edgeDir1-1] = 1;

    if (edgeCount == 2 && edgeDir2 >= 1 && edgeDir2 <= 4)
        edgeFlags[edgeDir2-1] = 1;
}

/*
    Funções para dar nome às direções
*/
static const char* dirNameTower(int d) {
    switch (d) {
        case 1: return "left";
        case 2: return "up";
        case 3: return "right";
        case 4: return "down";
        default: return "unknown";
    }
}
static const char* dirNameBishop(int d) {
    switch (d) {
        case 1: return "diagonal up-left";
        case 2: return "diagonal up-right";
        case 3: return "diagonal down-left";
        case 4: return "diagonal down-right";
        default: return "unknown";
    }
}
static const char* dirNameQueen(int d) {
    switch (d) {
        case 1: return "left";
        case 2: return "up";
        case 3: return "right";
        case 4: return "down";
        case 5: return "diagonal up-left";
        case 6: return "diagonal up-right";
        case 7: return "diagonal down-left";
        case 8: return "diagonal down-right";
        default: return "unknown";
    }
}

/*
    maxStepsTower / maxStepsBishop
    ------------------------------
    - Calculam o máximo de passos possíveis dependendo das bordas.
    - Se a peça está colada no lado para onde quer ir -> 0 passos.
    - Caso contrário, permitimos até N-1 passos.
*/
static int maxStepsTower(int direction, int edgeFlags[4]) {
    if ((direction==1 && edgeFlags[0]) || // esquerda
        (direction==2 && edgeFlags[1]) || // cima
        (direction==3 && edgeFlags[2]) || // direita
        (direction==4 && edgeFlags[3]))   // baixo
        return 0;

    return N-1;
}

static int maxStepsBishop(int direction, int edgeFlags[4]) {
    int left = edgeFlags[0], up = edgeFlags[1], right = edgeFlags[2], down = edgeFlags[3];

    if (direction==1 && (left || up))    return 0; // ↖
    if (direction==2 && (right|| up))    return 0; // ↗
    if (direction==3 && (left || down))  return 0; // ↙
    if (direction==4 && (right|| down))  return 0; // ↘

    return N-1;
}

// ======================================================================
// MOVIMENTOS DAS PEÇAS
// ======================================================================

/*
    moveHorse (Cavalo)
    ------------------
    - Movimentos em L fixos, não precisa de número de casas.
    - Imprime exatamente o formato pedido:
        move of horse:
        left
        left
        down
*/
void moveHorse(int direction) {
    printf("move of horse:\n");
    switch (direction) {
        case 1: printf("left\nleft\ndown\n");   break;
        case 2: printf("left\nleft\nup\n");     break;
        case 3: printf("up\nup\nleft\n");       break;
        case 4: printf("up\nup\nright\n");      break;
        case 5: printf("right\nright\nup\n");   break;
        case 6: printf("right\nright\ndown\n"); break;
        case 7: printf("down\ndown\nright\n");  break;
        case 8: printf("down\ndown\nleft\n");   break;
        default: printf("invalid option. choose 1..8.\n"); break;
    }
}

/*
    moveTower (Torre / Rook)
    ------------------------
    - Direções: 1=left, 2=up, 3=right, 4=down
    - Limita passos pelas bordas.
    - Imprime cada passo com contador.
*/
void moveTower(int squares, int direction, int edgeFlags[4]) {
    if (direction < 1 || direction > 4) {
        printf("invalid direction for rook (1..4).\n");
        return;
    }

    int maxp = maxStepsTower(direction, edgeFlags);

    if (squares > maxp) {
        printf("warning: max in this direction is %d step(s). executing up to the limit.\n", maxp);
        squares = maxp;
    }
    if (squares <= 0) {
        printf("no possible moves in this direction.\n");
        return;
    }

    for (int i=1; i<=squares; i++) {
        printf("%d) rook moved %s.\n", i, dirNameTower(direction));
    }
}

/*
    moveBishop (Bispo)
    ------------------
    - Direções: 1=↖, 2=↗, 3=↙, 4=↘
    - Usa bordas para limitar passos.
*/
void moveBishop(int squares, int direction, int edgeFlags[4]) {
    if (direction < 1 || direction > 4) {
        printf("invalid direction for bishop (1..4).\n");
        return;
    }

    int maxp = maxStepsBishop(direction, edgeFlags);

    if (squares > maxp) {
        printf("warning: max in this direction is %d step(s). executing up to the limit.\n", maxp);
        squares = maxp;
    }
    if (squares <= 0) {
        printf("no possible moves in this direction.\n");
        return;
    }

    for (int i=1; i<=squares; i++) {
        printf("%d) bishop moved %s.\n", i, dirNameBishop(direction));
    }
}

/*
    moveQueen (Rainha)
    ------------------
    - Direções:
        1..4 = movimentos retos (como torre)
        5..8 = movimentos diagonais (como bispo)
*/
void moveQueen(int squares, int direction, int edgeFlags[4]) {
    if (direction < 1 || direction > 8) {
        printf("invalid direction for queen (1..8).\n");
        return;
    }

    int maxp = (direction <= 4)
               ? maxStepsTower(direction, edgeFlags)
               : maxStepsBishop(direction - 4, edgeFlags);

    if (squares > maxp) {
        printf("warning: max in this direction is %d step(s). executing up to the limit.\n", maxp);
        squares = maxp;
    }
    if (squares <= 0) {
        printf("no possible moves in this direction.\n");
        return;
    }

    for (int i=1; i<=squares; i++) {
        printf("%d) queen moved %s.\n", i, dirNameQueen(direction));
    }
}

// ======================================================================
// DESPACHANTE (SelectPieces)
// ======================================================================

/*
    selectPieces
    ------------
    - Recebe a opção da peça escolhida pelo usuário.
    - Monta os "edgeFlags" a partir das respostas sobre bordas.
    - Chama a função específica de movimento.
*/
void selectPieces(int option, int squares, int direction, const char edge[8],
                  int edgeCount, int edgeDir1, int edgeDir2) {
    int edgeFlags[4]; // [left, up, right, down]

    if (isYes(edge)) identifyEdges(edgeCount, edgeDir1, edgeDir2, edgeFlags);
    else             identifyEdges(0, 0, 0, edgeFlags);

    switch (option) {
        case 1: moveHorse(direction);                         break;
        case 2: moveBishop(squares, direction, edgeFlags);    break;
        case 3: moveTower(squares, direction, edgeFlags);     break;
        case 4: moveQueen(squares, direction, edgeFlags);     break;
        default: printf("invalid piece.\n");                  break;
    }
}

// ======================================================================
// MAIN (fica por último, assim não precisamos de protótipos)
// ======================================================================

int main(void) {
    int option = 0;

    do {
        // Menu principal
        printf("\n");
        printf("╔════════════════════════════════════╗\n");
        printf("║         Chess Moves Menu           ║\n");
        printf("╠════════════════════════════════════╣\n");
        printf("║  1 ▸ Move the Horse                ║\n");
        printf("║  2 ▸ Move the Bishop               ║\n");
        printf("║  3 ▸ Move the Rook                 ║\n");
        printf("║  4 ▸ Move the Queen                ║\n");
        printf("║  5 ▸ Exit                          ║\n");
        printf("╚════════════════════════════════════╝\n");

        option = readInt("choose an option: ", 1, 5);
        if (option == 5) {
            printf("bye!\n");
            break;
        }

        // Perguntar sobre bordas
        char edge[8];
        readToken("is the piece on a board edge? (yes/y/sim/s | no/n/not/nao): ",
                  edge, sizeof(edge));
        if (!isYes(edge) && !isNo(edge)) {
            printf("invalid edge option.\n");
            continue;
        }

        // Se sim, perguntar quantas bordas e quais
        int edgeCount = 0, edgeDir1 = 0, edgeDir2 = 0;
        if (isYes(edge)) {
            edgeCount = readInt("how many edges? (1=side, 2=corner): ", 1, 2);
            edgeDir1  = readInt("edge #1 (1=left, 2=up, 3=right, 4=down): ", 1, 4);
            if (edgeCount == 2) {
                edgeDir2 = readInt("edge #2 (1=left, 2=up, 3=right, 4=down): ", 1, 4);
                if (edgeDir2 == edgeDir1) {
                    printf("edges must be different.\n");
                    continue;
                }
            }
        }

        // Direção e número de casas dependem da peça escolhida
        int direction = 0, squares = 0;

        if (option == 1) { // Cavalo
            printf("\nhorse directions (1..8):\n");
            printf("1: left,left,down | 2: left,left,up | 3: up,up,left | 4: up,up,right\n");
            printf("5: right,right,up | 6: right,right,down | 7: down,down,right | 8: down,down,left\n");
            direction = readInt("choose direction (1..8): ", 1, 8);

        } else if (option == 2) { // Bispo
            printf("\nbishop directions (1..4):\n");
            printf("1: diag up-left | 2: diag up-right | 3: diag down-left | 4: diag down-right\n");
            direction = readInt("choose direction (1..4): ", 1, 4);
            squares   = readInt("how many squares to move? ", 1, 64);

        } else if (option == 3) { // Torre
            printf("\nrook directions (1..4): 1=left, 2=up, 3=right, 4=down\n");
            direction = readInt("choose direction (1..4): ", 1, 4);
            squares   = readInt("how many squares to move? ", 1, 64);

        } else if (option == 4) { // Rainha
            printf("\nqueen directions (1..8): 1..4 (straight), 5..8 (diagonals)\n");
            direction = readInt("choose direction (1..8): ", 1, 8);
            squares   = readInt("how many squares to move? ", 1, 64);
        }

        // Chamar o despachante
        selectPieces(option, squares, direction, edge, edgeCount, edgeDir1, edgeDir2);

    } while (option != 5);

    return 0;
}