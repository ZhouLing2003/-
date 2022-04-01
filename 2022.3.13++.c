#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void *compare(char **p)
{
	char **q,**s,*t;
	for(q=p;q<p+4;q++)
	{
		for(s=q+1;s<p+5;s++)
		{
			if(strcmp(*q,*s)>0)
			{
				t=*q;
				*q=*s;
				*s=t;
			}
		}
	}
	return 0;
}
void main()
{
	char *str[5],string[5][20],**p;
	int i;
	for(i=0;i<5;i++)
	str[i]=string[i];
	printf("ÇëÊäÈë×Ö·û´®£º\n");
	for(i=0;i<5;i++)
	scanf("%s",str[i]);
	p=str;
	compare(p);
	printf("ÅÅÐòºóÊä³öÎª£º\n");
	for(i=0;i<5;i++)
		{
			printf("%s\n",str[i]);
		}
} 
