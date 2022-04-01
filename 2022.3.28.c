#include <stdio.h>
#include <string.h>

void FGetStr(char *str, int size, FILE *file);//参数 str字符数组起始地址的指针，size 为数组尺寸，file 为文件指针

int main()
{
    FILE *f;
    char a[10], b[10];
    f = fopen("MyStr.txt", "r");//文本文件只读（从文件中读取） 
    if (f)
    {
        FGetStr(a, 10, f);
        FGetStr(b, 10, f);
        puts(a);
        puts(b);
        fclose(f);
    }
    return 0;
}
void FGetStr(char *str, int size, FILE *file)
{
    int i = 0;
    char c;
    while(c = fgetc(file), c != '\n' && c != EOF && i < size - 1)
    {
        str[i] = c;
        i++;
    }
}

