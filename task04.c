#include <stdio.h>
int main(void){
    int n, x, digit, sum = 0;
    printf("Enter a non-negative number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }
    x = n;
    while (x > 0) {
        digit = x % 10;
        sum += digit * digit * digit;
        x /= 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number (sum of cubes)\n", n);
    } else {
        printf("%d is not an Armstrong number (sum of cubes)\n", n);
    }
    return 0;
}
