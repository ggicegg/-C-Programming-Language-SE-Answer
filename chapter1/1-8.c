// 1.8 编写一个统计空格、制表符、与换行符的程序

#include <stdio.h>

int main(void){
    int c;
    int b_count, t_count, l_count;
    b_count = 0;
    t_count = 0;
    l_count = 0;
    while ((c = getchar()) != EOF){
        if(c == ' '){
            b_count++;
        }
        else if (c == '\t'){
            t_count++;
        }else if(c == '\n'){
            l_count++;
        }
    }
    printf("换行\t制表\t空格\n");
    printf("%d\t%d\t%d\n",l_count,t_count,b_count);
    return 0;
}