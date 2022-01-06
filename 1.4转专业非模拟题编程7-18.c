#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	int arr[N],b;
	int count=0;
	double sum=0;
	double average=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&b);
		arr[i]=b;	
		if(arr[i]>=60)
		{
			count++;
		}
		sum=sum+arr[i];
	}
	average=sum/N;
	printf("average = %.1f\n",average);
	printf("count = %d",count);
	return 0;
}
