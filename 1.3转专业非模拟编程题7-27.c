#include<stdio.h> 
int main()
{
	int arr[10],i,b;
	int sum1=0;
	int sum2=0;
	int all=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&b);
		arr[i]=b;
	    if(arr[i]>0)
		{
		sum1=sum1+arr[i];
		}
	    if(arr[i]<0)
		{
		sum2=sum2+arr[i];
		}
    }
	all=sum1+sum2;
	printf("zhengshu=%d,fushu=%d,all=%d",sum1,sum2,all);
}
