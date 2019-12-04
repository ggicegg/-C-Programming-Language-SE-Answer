// 1.10 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，把回退符替换为\b，把反斜杠替换为\\。这样可以将制表符和回退符以可见的方式显示出来
#include <stdio.h>

int main(void){
    int c;
    while((c = getchar()) != EOF){
        switch (c)
        {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            default:
                putchar(c);
                break;
        }
    }
    return 0;
}
