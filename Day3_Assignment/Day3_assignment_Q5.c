#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse_number(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number, choice;
    
    scanf("%d", &number);
    scanf("%d", &choice);
    
    if (choice == 1) {
        if (is_prime(number)) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    } else if (choice == 2) {
        printf("%d", reverse_number(number));
    }
    
    return 0;
}