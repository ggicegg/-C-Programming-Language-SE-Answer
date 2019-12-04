// 1.2 做个实验,当printf函数的参考字符中包含\c（其中c是上面的转移字符序列中未曾列出的一个字符）时，观察一下会出现什么情况。
// 提示 warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]，可以编译通过，执行时打印了单个字符c
#include <stdio.h>

int main(void){
    // printf("hi \c");
    printf("hi \c\h\h");
    return 0;
}