/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
        for(j=1;j<=5-i;j++)     
        {
        	printf(" ");
		}
		for(j=1;j<2*i;j++)
		{
			printf("*");
		}
		for(j=1;j<=5-i;j++)     
        {
        	printf(" ");
		}
		printf("\n");
	}	
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j;
	int count=0;
	for(i=201;i<=300;i++)	
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)			
			{
				break;
			}
		}
		if(j==i)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n201-300֮�����������Ϊ��%d",count);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int len=strlen(str);
	int i,count=0;
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			count++;
		}
	}
	printf("Сд��ĸ�ĸ���Ϊ:%d\n",count);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,count=0;
	gets(str); 
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			count++;
		}
	}
	printf("��д��ĸ�ĸ���Ϊ��%d",count);
}
//�����ֱ�ɱ������Ե����� 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int len=strlen(str);
	int i;
	for(i=0;i<len;i++)
	{
		if(str[i]>='0'&&str[i]<='8')		
		{
			str[i]=str[i]+1;
		}
		else if(str[i]=='9')
		{
			str[i]='0';
		}
	}
	printf("%s",str);
	return 0;
}
//����1-100֮��������ż���ĺ�
#include<stdio.h> 
int main()
{
	int i,sum1=0,sum2=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)//ż���Ļ�
		{
			sum1=sum1+i;
		} 
		else
		{
			sum2=sum2+i;
		}
	}
	printf("ż����Ϊ��%d,������Ϊ:%d",sum1,sum2);
	return 0;
}
#include<stdio.h>
#define F(x) (x*x-2.3*x+5.6)/(x+8.2)
int main()
{
	float s,a,b,c;
	printf("��ֱ�����a,b,c��ֵ��");
	scanf("%f %f %f",&a,&b,&c) ;
	s=F(a)+F(b)+F(c);
	printf("%lf",s);
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("@ ");
		}		
		printf("\n");		
	}
	return 0;
}
*/
#include<stdio.h>















