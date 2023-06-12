# SKODA: 

## Game Idea
In this simple RPG game, you play as a character who cuts down trees and sells the wood for gold. The game is represented by a 2D grid, where the player is represented by the character 'P' and the trees are represented by the character 'T'. Your goal is to accumulate as much gold as possible by cutting down trees and selling the wood. My idea is to expand this game to new types of jobs or who knows the possibility of having your own business in a world with its own economy and ecosystem.

## How to Run
1. Ensure that you have a C compiler installed on your system (e.g., gcc).
2. Download or clone the repository to your local machine.
3. Navigate to the directory containing the source code file (e.g., `tree_cutter.c`).
4. Open a terminal or command prompt in that directory.
5. Compile the source code using the following command:
    ```
    gcc main.c -o main
    ```
6. Run the game using the following command:
    ```
    ./main
    ```

## Game Controls
- Use the numeric keys (1, 2, 3, 4) to move the player character (P) up, down, left, or right on the grid.
- Press 5 to cut down a tree (T) that the player is currently standing on.
- Press 6 to sell the wood collected. The wood will be converted to gold, and the wood count will be reset to zero.
- Press 7 to quit the game.

## Game Rules
- You can move the player character within the boundaries of the 2D grid.
- Cutting down a tree (T) increases your wood count by 1.
- You can only cut down a tree if you are standing on one.
- Selling the wood converts the wood count to gold at a 1:1 ratio.
- You cannot sell wood if you don't have any.
- The game continues indefinitely until you choose to quit.

Enjoy playing the RPG Game: Skoda!
