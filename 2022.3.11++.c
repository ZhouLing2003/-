/*#include<stdio.h>
#include<string.h> 
int main()
{
	char string[5][20];
	char str[20];
	int i,j;
	for(i=0;i<5;i++)
		scanf("%s",string[i]);
    putchar(10);
    for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(string[i],string[j])>0)
			{
				strcpy(str,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],str);
			}
		}
	}
	for(i=0;i<5;i++)
	printf("%s ",string[i]);
    putchar(10);
	return 0;
}
*/
int main()
{
	char string[5][20];
	char *p[5];
	char *str;//定义一个指针数组p是第一个指针的地址 
	*p=string;//p指向第一个指针
	int i,j;
	for(i=0;i<5;i++)
	{
	scanf("%s",*p); 		
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(**p,*(*p+1))>0)
			{
                /**********************/
   			}
		}
	}
	for(i=0;i<5;i++)
	printf("%s ",string[i]);
	return 0;
}









































