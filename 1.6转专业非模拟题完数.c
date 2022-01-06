#include<stdio.h> 
int main()
{
	int w,sum,j,m,n,flag;
	scanf("%d %d",&m,&n);
	for(w=m+1;m<w&&w<n;w++)
	{
		sum=0;
		for(j=1;j<w;j++)
		{
			if(w%j==0)
			{
				sum=sum+j;
			}
		}
		if(w==sum)
		{
			flag=1;
			int count=0;
			printf("%d its factors are ",sum);
			for(j=1;j<w;j++)
			{
				if(w%j==0)
				{
					if(count==0)
					{
						printf(" %d",j);
					}
					else
					{
						printf(",%d",j);
					}
					count++;
				}
			}
			printf("\n");
		}
	}
	if(flag!=0)
	{
		printf("Not Found!");
	}
    return 0;
}
