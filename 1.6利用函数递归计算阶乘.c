#include<stdio.h>
//���������� 
int Jiecheng(int n);
int main()
{
	int n;
	printf("������һ����:\n");
	scanf("%d",&n);
//�����ĵ��� 
    if(n>=0)
	{
	    printf("%d�Ľ׳���%d\n",n,Jiecheng(n));	
	}
	else
	{
		Jiecheng(n);
	}
return 0;
}
//�����Ķ��� 
int Jiecheng(int n)
{
	int t;
	if(n<0)
		printf("�����������ˣ�����û�н׳ˡ�");
	else if(n==1||n==0)
	    t=1;
	else
	    t=Jiecheng(n-1)*n;
	return (t);
}
