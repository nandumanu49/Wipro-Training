#include <stdio.h>

int main() {
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        // Print increasing characters
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + 2 * j);
        }
        // Print decreasing characters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c ", 'A' + 2 * j);
        }
        printf("\n");
    }
    return 0;
}
