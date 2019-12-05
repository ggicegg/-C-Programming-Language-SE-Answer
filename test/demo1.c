/**
 * 统计一个输入的字符书、行数、单词数
 * 
 **/
#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if('\n' == c){
            ++nl;
        }
        if(' ' == c || '\t' == c || '\n' == c){
            state = OUT;
        }else if(state == OUT){
            state = IN;
            ++nw;
        }
    }  
    printf("行数：%d 单词数：%d 字符数：%d\n",nl,nw,nc);
    
    return 0;
}