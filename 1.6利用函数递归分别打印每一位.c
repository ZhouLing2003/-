#include<stdio.h>
//��������
int print(int n); 
int main()
{
	unsigned int num=0;
	printf("������һ�����֣�\n");
	scanf("%d",&num);
//�������� 
	print(num);
	return 0;
}
//��������
int print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
} 
