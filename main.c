#include <stdio.h>

#define GRID_SIZE 5
#define PLAYER_CHAR 'P'
#define TREE_CHAR 'T'
#define EMPTY_CHAR ' '

void printGrid(char grid[GRID_SIZE][GRID_SIZE]) {
    printf("\n");
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    char grid[GRID_SIZE][GRID_SIZE];
    int playerX = 0;
    int playerY = 0;
    int wood = 0;
    int gold = 0;
    char choice;

    // Inicializando com espaços vazios
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            grid[i][j] = EMPTY_CHAR;
        }
    }

    // Setando a posição inicial do player
    grid[playerY][playerX] = PLAYER_CHAR;

    // Setando posição das arvores
    grid[1][1] = TREE_CHAR;
    grid[1][3] = TREE_CHAR;
    grid[3][1] = TREE_CHAR;
    grid[3][3] = TREE_CHAR;

        printf("Welcome to the Skoda!\n");

    while (1) {
        printGrid(grid);

        printf("Menu:\n");
        printf("1. Move up\n");
        printf("2. Move down\n");
        printf("3. Move left\n");
        printf("4. Move right\n");
        printf("5. Cut a tree\n");
        printf("6. Sell wood\n");
        printf("7. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        // Limpando posição anterior do player
        grid[playerY][playerX] = EMPTY_CHAR;

        switch (choice) {
            case '1':
                if (playerY > 0) {
                    playerY--;
                }
                break;
            case '2':
                if (playerY < GRID_SIZE - 1) {
                    playerY++;
                }
                break;
            case '3':
                if (playerX > 0) {
                    playerX--;
                }
                break;
            case '4':
                if (playerX < GRID_SIZE - 1) {
                    playerX++;
                }
                break;
            case '5':
                if (grid[playerY][playerX] == TREE_CHAR) {
                    wood++;
                    grid[playerY][playerX] = EMPTY_CHAR;
                    printf("You cut down a tree! Wood +1\n");
                } else {
                    printf("There is no tree to cut down!\n");
                }
                break;
            case '6':
                if (wood > 0) {
                    gold += wood;
                    printf("You sold %d wood for %d gold!\n", wood, wood);
                    wood = 0;
                } else {
                    printf("You don't have any wood to sell!\n");
                }
                break;
            case '7':
                printf("Exiting the game. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        // Atualizando nova posição do player
        grid[playerY][playerX] = PLAYER_CHAR;
    }

    return 0;
}