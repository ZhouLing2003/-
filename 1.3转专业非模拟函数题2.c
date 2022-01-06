#include <stdio.h>
#include <math.h>
//函数声明 
int IsSquare( int n );
double pow();
double sqrt(); 
//函数调用 
int main()
{
    int n;
    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");
    return 0;
}
//函数定义
int IsSquare( int n )
{
	int m;
	m=sqrt(n);
	if(pow(m,2)==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
