#include <stdio.h>
int main(void){
    int n, x, digit, sum;
    printf("Enter a non-negative number: ");
    while (scanf("%d", &n) == 1 && n >= 0) {
        x = n;
        sum = 0;
        while (x > 0) {
            digit = x % 10;
            sum += digit * digit * digit;
            x /= 10;
        }
        printf("Sum of cubes = %d\n", sum);
        printf("Armstrong (1=yes, 0=no): %d\n", sum == n);
        printf("Enter a non-negative number: ");
    }
    return 0;
}
