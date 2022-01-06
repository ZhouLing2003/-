#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{9,8,7},{-10,10,-5}};
	int i,j,max;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]<a[i][j+1])
			{
				max=a[i][j+1];
			}
		}
	}
	printf("%d",max);
	return 0;
} 
