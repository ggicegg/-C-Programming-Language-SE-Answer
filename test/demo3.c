// 测试转义颜色 \e
#include <stdio.h>

int main(void){
    printf("\e[01;32m Hello");
    return 0;
}