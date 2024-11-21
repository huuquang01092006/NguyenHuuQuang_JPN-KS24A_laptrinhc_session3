#include <stdio.h>
int main() {
    float bankinh, chuvi, dientich;
    float PI = 3.14;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    chuvi = 2 * PI * bankinh;
    dientich = PI * bankinh * bankinh;
    printf("Chu vi cua hinh tron: %.2f\n", chuvi);
    printf("Dien tich cua hinh tron: %.2f\n", dientich);
    return 0;
}

