#include <stdio.h>
#define MAXN 10
//函数声明 
void sort( int a[], int n );
int main()
{
    int i, n;
    int a[MAXN];
    scanf("%d", &n);
    for( i=0; i<n; i++ )
    {
    	scanf("%d", &a[i]);
	}
	//函数调用 
    sort(a, n);
    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
    {
    	printf(" %d", a[i]);
	}
    printf("\n");
    return 0;
}
void sort( int a[], int n )
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
