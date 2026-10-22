#include <stdio.h>
double kg_to_lb(double kg){
    const double k = 2.205;
    return kg * k;
}
int main(void){
    double value;
    printf("Enter kilograms (<= 0 to stop):\n");
    while (scanf("%lf", &value) == 1 && value > 0) {
        printf("%.2f kg = %.2f lb\n", value, kg_to_lb(value));
        printf("Enter kilograms (<= 0 to stop):\n");
    }
    return 0;
}
