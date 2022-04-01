#include<stdio.h>
#include<string.h>
#define N 5
void sort_Str(char **p);
int main(void)        
{
    int i;
    char *pstr[N], str[N][81];
    for (i=0; i<N; i++)
    {
        pstr[i] = str[i];
    }
    for (i=0; i<N; i++) 
    {
        gets(pstr[i]);
    }
    sort_Str(pstr);
    for (i=0; i<N; i++)
    {
        printf("%s\n", pstr[i]);//pstr是数组名存储的是第一个元素的地址，第一个元素为指针，故pstr为二级指针 
    }
    return 0;
}
void sort_Str(char **p)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(strcmp(**p,((*p)+j)))
			{
				
			}
		}
	}
}



