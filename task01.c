#include <stdio.h>
#define PA_IN_KPA 1000
int main(void){
    long long pa;
    printf("Enter pressure in Pa (<= 0 to stop):\n");
    while (scanf("%lld", &pa) == 1 && pa > 0) {
        long long kpa = pa / PA_IN_KPA;
        long long rest = pa % PA_IN_KPA;
        printf("%lld Pa = %lld kPa and %lld Pa\n", pa, kpa, rest);
        printf("Enter pressure in Pa (<= 0 to stop):\n");
    }
    return 0;
}
