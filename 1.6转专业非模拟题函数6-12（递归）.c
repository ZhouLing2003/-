#include <stdio.h>
int f( int n );

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
//���õݹ���쳲������� 
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
//��õ���쳲��������ķ��� 
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


