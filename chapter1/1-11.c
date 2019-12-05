// 1.11 你准备如何测试单词计数程序？如果程序中存在某种错误，那么什么样的输入最可能发现这类错误  
/**
 * 统计一个输入的字符书、行数、单词数
 * 设计一些测试用例
 * case1:abc abc\t
 * case2:\tabc abc
 * case3: abc abc
 * case4: abc  abc
 * case4: abc\tabc
 **/
#include <stdio.h>

#define IN 1
#define OUT 0

void cal_blank();

int main(void){
    cal_blank();
    return 0;
}

void cal_blank(){
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
}