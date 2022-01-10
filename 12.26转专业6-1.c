#include<stdio.h>
int prime(int p);
int PrimeSum(int m,int n );
int main()
{
	int i;
	int x;
	int sum;
	int prime(int p)
	{
		for(i=p-1;i<p;i++)
		{
			if(p%i==0)
			{
			    return 1;
				break;
			}
			if(i==p)
			{
				return 0;
			}
		}
	}
	int PrimeSum(int m,int n)
	{
		for(x=m;x<n;x++)
		{
			if(prime(i)==0)
			{
			    sum+=i;
			}
		}
		return sum;
	}
	int m, n, p;
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for(p=m;p<=n;p++)
	{
        if(prime(p)!=0)
        {
        	printf("%d ",p);
		}
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
