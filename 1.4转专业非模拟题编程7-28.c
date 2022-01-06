#include<stdio.h>
int main()
{
	int b,a[10];
	int count=0;
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&b);
		a[i]=b;
		if((i+1)%2==0&&a[i]%2==1)
		{
			count++;
		}
	}
	printf("\ncount=%d",count);
	for(i=0;i<10;i++)
	{
		if((i+1)%2==0&&a[i]%2==1)
		{
			printf("\na[%d]=%d",i,a[i]);
		}
	}
	return 0;
}
