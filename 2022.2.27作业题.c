/*
#include <stdio.h>
void find(int *, int, int *, int *);

int main(void)
{ 
    int maxsub, minsub, a[]={5, 3, 7, 9, 2, 0, 4, 1, 6, 8};
    find(int *a,10, int *maxsub, int *minsub);
    printf("%d,%d\n", maxsub, minsub);
    return 0;
}
void find(int *a, int n, int *maxsub, int *minsub)
{
    int i;
    //都规定下标为0 
    *maxsub = *minsub = 0;
    for (i = 1; i < n; i++)
	{
        if (a[i] > a [*maxsub])
		{
            *maxsub=*i;
        }
        if (a[i] < a [*minsub])
		{
            *minsub=*i;
        }
    }
}
#include <stdio.h>
#define N 5
int Min(int *p, int n,int *pos );

int main()
{
    int a[10],i,min,min_pos;
    int *pa=a;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    min=Min(pa,N,&min_pos);
    printf("min=%d,min_pos=%d",min,min_pos);
    return 0;
}
int Min(int *p, int n,int *pos )
{
	
}
*******************************************
*/
#include <stdio.h>
#include<math.h> 
void fun (int x, int *px);
int main()
{ 
    int num, t;
    scanf("%d", &num);
    fun(num, &t);
    printf("The result is: %d\n", t);
    return 0;
}
int self_size(int a)
{
	int count=1;
	while(a>=10)
	{
		a=a/10;
		count++;
	}
	return count;
}
void fun (int x, int *px)
{
    int t=x;
    int s=0;
    *px=0;
    int j=0;
    int count=self_size(x);
    for(;count>0;count--)
    {
    	s=x%10;
    	x=x/10;
    	if(s%3==0)
    	{
    		if(j=0)
    		{
    			*px=s;
    			j++;
			}
			else
			{
				*px=*px+s*pow(10,j);
				j++;
			}
		}
	}
	if(*px==0)
	{
		*px=t;
	}
}
/*
#include <stdio.h>
#define N 5
int Min(int *p, int n,int *pos );

int main()
{
    int a[10],i,min,min_pos;
    int *pa=a;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    min=Min(pa,N,&min_pos);
    printf("min=%d,min_pos=%d",min,min_pos);
    return 0;
}
int Min(int *p, int n,int *pos )
{
	int count=0,j=0;
	for(;count<n;count++)
	{
		if(*p>*(p+1))
		{
			*p=*(p+1);
		}
	}
	pos=&j;
	return *p;
}
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
void Input(float *pa,int *n)
{
	int t=0;
	while(*pa>=0&&*pa<=100)
	{
		scanf("%lf",*pa);
		t++;
	}
	n=&t;
}
float Average(float *pa, int n)
{
	float ave;
	int count=0,sum=0;
	while(count<n)
	{
		sum=sum+*p;
		pa++;
	}
	ave=sum/n;
	return ave;
}
void Sort(float *pa,int n)
{
	
}
*/



















