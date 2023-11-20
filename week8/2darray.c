#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[3][4];
    int B[3][4];
    int i, j;

    // Seed the random number generator
    srand(time(NULL));

    // Assign random values to each element of the array
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            A[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    // Print the array to verify
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}