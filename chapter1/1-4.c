// 1.4 编写一个程序打印摄氏温度转换未相应华氏温度的转换表
#include <stdio.h>

int main(void){
    float fahr, ceslsius;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 6;
    ceslsius = lower;
    printf("CESLSIUS FAHR\n");
    while (ceslsius <= upper)
    {
        fahr = ceslsius * (9.0 / 5.0) + 32; 
        printf("%6.0f %6.1f\n",ceslsius,fahr);
        ceslsius += step;
    }
    return 0;
}