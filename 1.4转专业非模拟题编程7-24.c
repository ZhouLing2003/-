#include<stdio.h>
int main()
{
	int n,i,a[10],b[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		b[i]=a[i+1]-a[i];
	int x,count=0,flag=0;
	for(x=0;x<=n-2;x++) 
	{
		printf("%d",b[x]);
		count++;
		flag++;
		if(count==3&&flag!=9)
		{
			printf("\n");
			count=0;
		}
		else if(flag!=9)
		{
			printf(" ");
		}
	}
return 0;
}
