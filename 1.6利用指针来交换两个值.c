#include<stdio.h>
int main()
{
	int*p,*q,*r;
	int a,b;
	printf("��������������\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)//ͨ������ָ���Ԫ����ʹ����˳���ӡ 
	{
		r=p;
		p=q;
		q=r;
	}
	printf("����Ǹ���Ϊ��%d��С���Ǹ���Ϊ��%d",*p,*q);
	return 0;
}
/*
int main()
{
	int*p,*q,r,a,b;
	printf("��������������\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)
	{
		r=*p;
	    *p=*q;
		*q=r;	
	}
    printf("����Ǹ���Ϊ%d��С���Ǹ���Ϊ%d",a,b);
	return 0;
}
*/
