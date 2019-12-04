// 1.9 编写一个姜输入复制到输出的程序，并将其中连续的多个空格用一个空格代替

#include <stdio.h>

int main(void){
    int c;
    int offset = 0;  // 字符开始计数
    int b_count = 0;
    // case1:   a b  c
    // case2: a b  c
    // case3:a b  c
    // case4:abc
    while ((c = getchar()) != EOF){
        //如果重新输入了字符到流中，重置字符开始计数为0
        //当c是空格时，判断是否为第一个字符
        //  是，继续取下一个字符，直到取到不是空格为止
        //  不是，空格计数+1，继续取下一个字符，直到取到不是空格为止
        //判断空格计数，大于0则打印一个空格，否则打印字符
        if('\n' == c){
            offset = -1;
        }
        if (' ' == c){
            if (0 != offset){
                b_count++;
            }
            continue;         
        }
        if(b_count > 0){
            putchar(' ');
            b_count = 0;
        }
        putchar(c);
        offset++;
    }
    return 0;
}
