#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("Nhiet do theo do Fahrenheit là: %.3f\n", fahrenheit);
    return 0;
}

