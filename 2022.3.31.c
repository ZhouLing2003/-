
#include <stdio.h>
#define N 10
void Input(float *pa,int *n);
float Average(float *pa, int n);
void Sort(float *pa,int n);

int main()
{
    float a[N],ave;
    float *p = a;
    int n;
    Input(p, &n);
    ave = Average(p, n);
    Sort(p,n);
    printf("average = %.2f\n",ave);
    for(p = a;p<a+n;p++)
        printf("%-7.1f",*p);
    return 0;
}
void Input(float *pa, int *n)
{
    float score=0;
    int i=0;
    while(score!=9999&&i!=10)
    {
        scanf("%f",&score);
        if(score<=100&&score>=0)
        {
            *(pa+i)=score;
            i++;
        }
    }
    *n=i;
}
float Average( float *pa, int n)
{
    int i;
    float sum=0;
    if(n==0)
    {
    	return 0;
	}
	float *p=pa;
    for(i=0;i<n;i++)
    {
        sum+=p[i];
    }
    return sum/n;
}
void Sort(float *pa,int n)
{
    int i,j;
    float temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(pa+i)<*(pa+j))
            {
                temp=*(pa+i);
                *(pa+i)=*(pa+j);
                *(pa+j)=temp;
            }
        }
    }
}
/*
void Conv( char *p )
{
    if(*p>='a'&&*p<='z')//第一个是小写字母的话
    {
        *p=*p-32;
        p++;
    }    
    while(*p!='\0')
    {
        if(*(p-1)==' '&&(*p>='a'&&*p<='z'))
        {
            *p=*p-32;
        }
        p++;
    }    
} 
*/
