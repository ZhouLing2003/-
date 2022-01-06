#include<stdio.h>
int main()
{
	int*p,*q,*r;
	int a,b;
	printf("请输入两个数：\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)//通过交换指向的元素来使数按顺序打印 
	{
		r=p;
		p=q;
		q=r;
	}
	printf("大的那个数为：%d，小的那个数为：%d",*p,*q);
	return 0;
}
/*
int main()
{
	int*p,*q,r,a,b;
	printf("请输入两个数：\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)
	{
		r=*p;
	    *p=*q;
		*q=r;	
	}
    printf("大的那个数为%d，小的那个数为%d",a,b);
	return 0;
}
*/
