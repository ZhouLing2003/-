#include<stdio.h>
int main()
{
	int n,tem1,tem2,i,arr[10],b;
	int max=arr[0];
	int min=arr[0];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		arr[i]=b;
		if(max<arr[i])
		{
			max=arr[i];
			tem1=arr[n-1];
			arr[n-1]=max;
			arr[i]=tem1;
		}
		if(min>arr[i])
		{
			min=arr[i];
			tem2=arr[0];
			arr[0]=min;
			arr[i]=tem2;	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
