#include<stdio.h>
//函数声明 
int max4(int a,int b,int c,int d);
int main()
{
	int a,b,c,d,MAX;
	printf("请输入四个整数：\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
//函数调用 
	MAX=max4(a,b,c,d);
	printf("最大数是:%d",MAX);
	return 0;
} 
//函数定义 
int max4(int a,int b,int c,int d)
{
	return max2(max2(max2(a,b),c),d);
}
int max2(int a,int b)
{
	return(a>b?a:b);
}
