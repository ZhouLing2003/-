#include<stdio.h>
//函数的声明 
int Jiecheng(int n);
int main()
{
	int n;
	printf("请输入一个数:\n");
	scanf("%d",&n);
//函数的调用 
    if(n>=0)
	{
	    printf("%d的阶乘是%d\n",n,Jiecheng(n));	
	}
	else
	{
		Jiecheng(n);
	}
return 0;
}
//函数的定义 
int Jiecheng(int n)
{
	int t;
	if(n<0)
		printf("你的数字输错了，负数没有阶乘。");
	else if(n==1||n==0)
	    t=1;
	else
	    t=Jiecheng(n-1)*n;
	return (t);
}
