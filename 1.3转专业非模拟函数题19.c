#include<stdio.h>
#include<math.h>
double mypow( double x, int n );

int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));
    return 0;
}
double mypow( double x, int n )
{
	double ret=pow(x,n);
	return ret;
}

