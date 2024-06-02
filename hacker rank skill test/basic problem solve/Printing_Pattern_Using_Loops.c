#include <stdio.h>

void print_pattern(int n) {
    int size = 2 * n - 1;
    int pattern[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Determine the number to print based on the minimum distance to the edges
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j ? min : size - j - 1;
            pattern[i][j] = n - min;
        }
    }

    // Print the pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}
