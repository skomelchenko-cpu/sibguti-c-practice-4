#include <stdio.h>
int main(void){
    int n, i = 1;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    while (i <= n) {
        long long t = (long long)i * (i + 1) / 2;
        printf("%lld ", t);
        i++;
    }
    printf("\n");
    return 0;
}
