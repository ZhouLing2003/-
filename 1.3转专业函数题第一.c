#include<stdio.h>
/*
int main()
{
	int i=0;
	for(i=1;i<=100;i++)//规定了素数的范围 
	{
		int j=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
*/
/*
int prime(int p);//函数的声明 
int main(){
	int p;
	scanf("%d",&p) ;
	if(prime(p)!=0)
	{
		printf("%d",prime(p));
	}
	return 0;
}
//函数的定义 
int prime(int p)
{
	int i=0;
	for(i=2;i<p;i++)
	{
		if(p%i==0)
		{
			return 0;
			break;
		}
	}
	if(i==p)
	{
		return 1;
	}
*/
/*
int main()
{
	int n=0;
	int FAC=1;
	int i=1;
	printf("请输入一个数：");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		FAC*=i;
	}
	printf("%d",FAC);
	return 0;
}
*/
double fac();
int main()
{
  int i;
  scanf("%d",&i);
  printf("%lf",fac(i));
}
double fac()
{
	static int n;
	double ret=1.0;
	int i=1;
	for(i=1;i<=n;i++)
    ret=ret*i;
	return ret;
}

