#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

int main() {
    char walk[ROWS][COLS];

    for (int rows = 0; rows < ROWS; ++rows) {
        for (int cols = 0; cols < COLS; ++cols) {
            walk[rows][cols] = '.';
        }
    }

    bool visited[ROWS][COLS] = { false };

    srand((unsigned) time(NULL));

    // Pick a random starting point
    int current_row = rand() % ROWS;
    int current_column = rand() % COLS;

    char letters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
                       'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
                       'W', 'X', 'Y', 'Z' };
    int current_letter = 1;

    walk[current_row][current_column] = letters[0];
    visited[current_row][current_column] = true;

    // Keep walking as long as there are letters left and a move is possible
    while(current_letter < 26) {
        bool visited_direction[4] = { false };
        int direction = rand() % 4;
        bool stuck = false;

        while (true) {
            int temp_row = current_row;
            int temp_col = current_column;
            bool valid = false;

            if (direction == 0) {
                temp_row--;
            }
            else if (direction == 1) {
                temp_row++;
            }
            else if (direction == 2) {
                temp_col--;
            }
            else if (direction == 3) {
                temp_col++;
            }

            if (temp_row >= 0 && temp_row < ROWS 
                && temp_col>= 0 && temp_col < COLS
                && !visited[temp_row][temp_col]) {
                    valid = true;
            }

            // Mark this direction as tried, whether it worked or not
            visited_direction[direction] = true;

            if (valid) {
                walk[temp_row][temp_col] = letters[current_letter++];
                visited[temp_row][temp_col] = true;
                current_row = temp_row;
                current_column = temp_col;
                break; // Move made, go back to outer while for next letter
            }

            // Collect directions not yet tried
            int untried[4];
            int count = 0;
            for (int i = 0; i < 4; ++i) {
                if (!visited_direction[i]) {
                    untried[count++] = i;
                }
            }

            if (count == 0) {
                // All 4 directions tried and failed i.e. fully stuck
                stuck = true;
                break;
            }

            // Pick randomly among only the untried directions
            direction = untried[rand() % count];
        }

        if (stuck) {
            break;
        }
    }

    printf("Starting array: \n");
    for (int rows = 0; rows < ROWS; ++rows) {
        for (int cols = 0; cols < COLS; ++cols) {
            printf("%c  ", walk[rows][cols]);
        }
        printf("\n");
    }
    printf("Ending Array.\n");

    return 0;
}