#include<stdio.h>
int main()
{
	int arr1[5],arr2[5];
	int i,j,b1,b2;
	int sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&b1);
		arr1[i]=b1;
	}
	for(j=4;j>=0;j--)
	{
		scanf("%d",&b2);
		arr2[j]=b2;
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr1[i]*arr2[i];
	}
	printf("\nsum=%d",sum);
	return 0;
}
