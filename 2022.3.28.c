#include <stdio.h>
#include <string.h>

void FGetStr(char *str, int size, FILE *file);//���� str�ַ�������ʼ��ַ��ָ�룬size Ϊ����ߴ磬file Ϊ�ļ�ָ��

int main()
{
    FILE *f;
    char a[10], b[10];
    f = fopen("MyStr.txt", "r");//�ı��ļ�ֻ�������ļ��ж�ȡ�� 
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

