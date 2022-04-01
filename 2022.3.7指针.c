/*
#include<stdio.h>
int main()
{
	int array[5];
	int *p=array;
    printf("请输入5个数字：\n");
    for(p=array;p<array+5;p++)
    	scanf("%d",p);
    for(p=array;p<array+5;p++)
        printf("%d ",*p);
	return 0;
}
#include<stdio.h>
void output(int *p,int n);
int main()
{
	int array[5]={1,2,3,4,5};
	output(array,5);
	
	return 0;
}
void output(int *array,int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",*(array+i));
	}
}
#include<stdio.h>
int main()
{
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("%d",*(*(array+2)));
	return 0;
}
#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	//int *p;//用列指针来做 
	//for(p=a[0];p<a[0]+12;p++)
	//{
	//	printf("%d ",*p);
	//}
	int (*p)[4]=a;//用行指针来做
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			//printf("%d ",*(*(a+i)+j));
			printf("%d ",*(a[i]+j));
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char string[]="hello world!";
	char *str=string;
	printf("%s\n",str);
	printf("%c",*(str+3));
	return 0;
}
*/
#include<stdio.h>
int main()
{
	char string[100];
	char *str1,*str2;
	gets(string);
	for(str1=string,str2=str1;*str1!='\0';)
	if(*str1>='0'&&*str1<='9')
	{
		str1++;
	}
	else
	{
		*str2=*str1;
		str2++;
		str1++;
	}
	*str2='\0';
	printf("%s\n",string);
	return 0;
}














































