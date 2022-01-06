#include<stdio.h>
int main()
{
	int i,n,b,k,j,arr[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		arr[i]=b;
		k=arr[0];
		if(k<arr[i])
		{
			k=arr[i];
		}
	}
	for(j=0;j<i;j++)
	{
		if(k==arr[j])
		{
			i=j;
		}
	}
	printf("%d %d",k,i);
	return 0;
}
