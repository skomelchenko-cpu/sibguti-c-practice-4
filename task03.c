#include <stdio.h>
int main(void){
    int n, i;
    printf("Enter N: ");
    while (scanf("%d", &n) == 1 && n > 0) {
        i = 1;
        while (i <= n) {
            long long t = (long long)i * (i + 1) / 2;
            printf("%lld ", t);
            i++;
        }
        printf("\n");
        printf("Enter N: ");
    }
    return 0;
}
