// 1.12 编写一个程序，以每行一个单词的形式打印其输入  

#include <stdio.h>
#define IN 1
#define OUT 0

/**
 * case1:  a a  a
 * case2: a a  a
 * case3:a  a   a
 * case4:a(\n)a
 * case5:a(\t)a
 * **/
int main(void){
    int c;
    int state;      // 是否是单词状态
    int b_c = 0;   // 空白计数
    int b_begin = 0; // 有效字符计数 0代表从开始读取字符一直是空白或者未读取字符状态
    state = OUT;
    while((c = getchar()) != EOF){
        // 如果是空白字符则空白字符数增加，并设置状态为非单词状态
        if(' ' == c || '\t' == c){
            state = OUT;
            ++b_c;
        }else if ('\n' == c){
            // 如果是换行 重置有效字符数为开始
            state = OUT;
            ++b_c;
            b_begin = 0;
        }else{
            // 读取的字符不是空白字符，进入单词状态
            state = IN;
        }
        if(IN == state){ // 如果进入单词状态 打印字符并使有效字符计数增加
            if(b_c > 0 && b_begin > 0){  
                //无论发现多少个空白就打印一次换行，然后空白计数归0
                //如果是首字符是空白（有效字符计数为0）要跳过首部的一个或多个空字符，不打印换行符
                //即如果空白计数大于0 且 有效字符数大于0 打印一个换行
                printf("\n");
            }
            b_c = 0;
            ++b_begin;
            putchar(c);
        }
    }
    return 0;
}