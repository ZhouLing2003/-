#include <stdio.h>
#include <math.h>
//函数声明 
int prime(int p);
int PrimeSum(int m, int n);
//函数调用 
int main()
{
    int m, n, p;
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));
    return 0;
}
//函数定义 
int prime(int p)
{
	int i=0;
	for(i=2;i<p;i++)
	{
		if(p%i==0)
		{
			return 0;
		}
	}
	if(i==p)
	{
		return 1;
	}
	if(p<=1)
	{
		return 0;
	}
}
int PrimeSum( int m, int n )
{
	int sum=0;
	int p=0;
	for(p=m;p<=n;p++)
	{
		if(prime(p)!=0)
		{
	        sum=sum+p;
		}
	}
	return sum;
}
