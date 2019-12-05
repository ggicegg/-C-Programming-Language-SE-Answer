// 1.13 编写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些  
#include <stdio.h>
#define MAX 100
#define IN 1
#define OUT 0

void print_column_diagram(int num);
int main(void){
    int c, i, j;
    int wordsl[MAX];
    int wordl = j = 0;
    for(i = 0; i < MAX; ++i){
        wordsl[i] = 0;
    }
    while((c = getchar()) != EOF){
        if(' ' == c || '\t' == c || '\n' == c){
            if(wordl != 0){
                wordsl[j++] = wordl;
                wordl = 0;
                continue;
            }
        }else{
            wordl++;
        }
    }
    for(i = 0; i < MAX; i++){
        int t = wordsl[i];
        if(0 != t){
            print_column_diagram(t);
            // printf("%d\t",t);
        }
    }
    return 0;
}

void print_column_diagram(int num){
    for(int i = 0;i < num; i++){
        printf("]");
    }
    printf("\n");
}