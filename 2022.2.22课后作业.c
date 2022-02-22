/*#include <stdio.h>

void sum_diff( float op1, float op2, float *psum, float *pdiff );

int main()
{
    float a, b, sum, diff;

    scanf("%f %f", &a, &b);
    sum_diff(a, b, &sum, &diff);
    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
    
    return 0; 
}
void sum_diff( float op1, float op2, float *psum, float *pdiff )
{
    *psum=op1+op2;
	*pdiff=op1-op2;	
}
#include <stdio.h>
void swap ( int *a,  int *b );

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d", x,y);
    return 0;
}
void swap ( int *a,  int *b )
{
	int t;
	t=*b;
	*b=*a;
	*a=t;
}
*/
#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;
    
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    
    return 0;
}
void splitfloat( float x, int *intpart, float *fracpart )
{
	int t=x/1;
	*intpart=t;
	*fracpart=x-t;
}



















