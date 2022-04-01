#include <stdio.h>
#include <string.h>
#define N 32
void conj(char *s1, char *s2);
int main(void)
{
    char str1[N * 2], str2[N];
    gets(str1);
    gets(str2);
    conj(str1, str2);
    printf("After conj string1:%s\n", str1);
    return 0;
}
void conj(char *s1, char *s2)
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	char tmp[N * 2];
	int i,j;
	for(i=0,j=0;i<N,j<N*2;i++)
	{
        tmp[j]=s1[i];
        j++;
        tmp[j]=s2[i];
        j++;
	}
	if(len1>len2)
	{
	    for(j=len2*2,i=len2;i<N,j<N*2;i++,j++)	
	    {
	    	tmp[j]=s1[i];
		}
	}
	if(len1<len2)
	{
		for(j=len1*2,i=len1;i<N,j<N*2;i++,j++)
		{
			tmp[j]=s2[i];
		}
	}
	for(i=0;i<N * 2;i++)
	{
		s1[i]=tmp[i];
	}
}

