#include<stdio.h>
//函数声明
int print(int n); 
int main()
{
	unsigned int num=0;
	printf("请输入一串数字：\n");
	scanf("%d",&num);
//函数调用 
	print(num);
	return 0;
}
//函数定义
int print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
} 
