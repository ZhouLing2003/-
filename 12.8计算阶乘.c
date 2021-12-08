#include<stdio.h>
int main(){
	int i=0;
	int n=0;
	int ret=1;
	int sum=0;
	//scanf("%d",&n);
//另外一种嵌套循环用for来实现：
    for(n=1;n<=10;n++)
    {
    ret=1;
    for(i=1;i<=n;i++)
	{
		ret=ret*i;	
    }//内部的for循环用于计算阶乘
    sum=sum+ret; 
    }
/*	while(i<=n)
	{
	for(i=1;i<=n;i++)
	{
		ret=ret*i;
  	sum=sum+ret;
	}
	}*/
	printf("阶乘为:%d\n",ret); 
	printf("阶乘和为%d\n",sum);
	return 0;
}
 
