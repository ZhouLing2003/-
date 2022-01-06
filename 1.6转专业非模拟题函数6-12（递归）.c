#include <stdio.h>
int f( int n );

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
//利用递归算斐波那契数 
int f( int n )
{
	if(n<=2)
	{
		return 1;
	}
	else
	{
		return f(n-1)+f(n-2);
	}
}
//最好的求斐波那契数的方法 
/*
int f( int n )
{
	int a=1;
	int b=1;
	int c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;	
	}
	return c;
}
*/


