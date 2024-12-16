#include <stdio.h>
#include <stdbool.h>


bool has_repeated_consecutive_digits(int num) {
    int prev_digit = -1;
    while (num > 0) {
        int current_digit = num % 10;
        if (current_digit == prev_digit) {
            return true;
        }
        prev_digit = current_digit;
        num /= 10;
    }
    return false;
}

int main() {
    int n1, n2, count = 0;

    printf("Enter the value of n1: ");
    scanf("%d", &n1);
    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    for (int i = n1; i <= n2; i++) {
        if (!has_repeated_consecutive_digits(i)) {
            count++;
        }
    }

    printf("Output: %d\n", count);
    return 0;
}
