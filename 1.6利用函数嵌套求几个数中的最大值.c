#include<stdio.h>
//�������� 
int max4(int a,int b,int c,int d);
int main()
{
	int a,b,c,d,MAX;
	printf("�������ĸ�������\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
//�������� 
	MAX=max4(a,b,c,d);
	printf("�������:%d",MAX);
	return 0;
} 
//�������� 
int max4(int a,int b,int c,int d)
{
	return max2(max2(max2(a,b),c),d);
}
int max2(int a,int b)
{
	return(a>b?a:b);
}
