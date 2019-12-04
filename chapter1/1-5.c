// 1.5 修改温度转换程序，要求以逆序（即按照300度到0度的顺序）打印温度转换表
#include <stdio.h>

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    printf("FAHR CELSIUS\n");
    while (fahr >= lower){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n",fahr,celsius);
        fahr = fahr - step;
    }
}