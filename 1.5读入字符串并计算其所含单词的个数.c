#include<stdio.h>
int main()
{
	char c[81];
	int n=1,i;
	gets(c);
	if(c[0]==' ')
	{
	    n=0;
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' '&&c[i+1]!=' '&&c[i+1]!='\0')
		{
			n++;
		}
	}
	system("cls");
	printf(" * * * * * * * * * * * * * * * * * * *  \n");
    printf("%s\n",c);
	printf("单词个数为：%d",n);
	return 0;
}

