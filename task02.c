#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main(void){
    uint16_t a, b, h;
    float s;
    printf("Enter a, b and h: ");
    if (scanf("%" SCNu16 " %" SCNu16 " %" SCNu16, &a, &b, &h) != 3) {
        return 0;
    }
    s = (float)(a + b) * h / 2;
    printf("Result = %.2f\n", s);
    printf("sizeof(uint16_t) = %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("sizeof(float) = %llu\n", (unsigned long long)sizeof(float));
    return 0;
}
