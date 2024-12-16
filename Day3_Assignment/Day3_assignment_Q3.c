#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
while (n > 0) {
        product *= n % 10; 
        n /= 10;           
    }
    printf("Output: %d\n", product);
    return 0;
}
