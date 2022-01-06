#include<stdio.h>
int main()
{
	int N; 
	double sum=0;
	int m=1;
	int count;
	int flag=1;
	scanf("%d",&N);
	for(count=1;count<=N;count++)
	{
		sum+=flag*1.0/(m);
		m=m+3;
		flag=-flag;
	}
	printf("sum = %.3f",sum);
	return 0;
}
