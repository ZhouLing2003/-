/*#include<stdio.h>
int main()
{
	int a,b,c;
	int n1,n2,n3;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(c>a)
		{
			n1=c;
			n2=a;
			n3=b;
		}
		else if(c<b)
		{
			n1=a;
			n2=b;
			n3=c;
		}
	}
	else
	{
		if(c<a)
		{
			n1=b;
		    n2=a;
		    n3=c;
		}
		else if(c>b)
		{
			n1=c;
			n2=b;
			n3=a;
		}
	}
	printf("%d->%d->%d",n3,n2,n1);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c;
	int n1,n2,n3;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&b>c)
	{
		n1=a;
		n2=b;
		n3=c;
	}
	if(a>b&&c>a)
	{
		n1=c;
		n2=a;
		n3=b;
	}
	if(a>b&&c>b&&c<a)
	{
		n1=a;
		n2=c;
		n3=b;
	}
	if(b>a&&c>b)
	{
		n1=c;
		n2=b;
		n3=a;
	}
	if(b>a&&c<a)
	{
		n1=b;
		n2=a;
		n3=c;
	}
	if(b>a&&c<b&&c>a)
	{
		n1=b;
		n2=c;
		n3=a;
	}
	printf("%d->%d->%d",n3,n2,n1);
	return 0; 
}
*/
#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		t=a;
		a=b;
		b=t; 
	}//����a�Ѿ��Ǳ�b����
	if(a<c)
	{
		t=a;
		a=c;
		c=t;
	}//��һ��֮��a�������ˣ�������Ҫ����b��c�Ĵ�С
	if(b<c)
	{
		t=b;
		b=c;
		c=t;
	}//��һ����bһ���Ǵ���c���ˣ�����a��b��c ��ֵ������С��
	printf("%d->%d->%d",c,b,a);
	return 0;
}


























