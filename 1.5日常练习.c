#include<stdio.h>
//��д��ĸ��Сд 
/*
int main()
{
	char a;
	scanf("%c",&a);
	a=a+32;
	printf("%c",a);
	return 0; 
}
//Сд��ĸת��д 
int main()
{
	char a;
	scanf("%c",&a);
	a=a-32;
	printf("%c",a);
	return 0;
} 
//putchar&gerchar��ʹ�� 
int main()
{
	char a,b,c;
	a=getchar();
	b=getchar();
	c=getchar();
	a=a-32;
	b=b-32;
	c=c-32;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}
//ȡ��С�������ĸ�λ��ʮλ����λ 
int main()
{
	int a,b,c;
	double m;
	scanf("%lf",&m);
	a=(int)(m/100);
	b=(int)((m-a*100)/10);
	c=(int)(m-100*a-10*b);
	printf("%d %d %d",a,b,c);
	return 0;
}
//if�ķֶκ��� 
int main()
{
	int x;
	scanf("%d",&x);
	if(x<0)
	{
		printf("-1");
	}
	if(x>0)
	{
		printf("1");
	}
	if(x==0)
	{
		printf("0");
	}
	return 0;
}
//�ж��Ƿ�Ϊ���� 
int main()
{
	int year;
	printf("������һ����ݣ�");
	scanf("%d",&year);
	for(year=1000;year<2000;year++)
	{
		if(year%4==0&&year%10!=0||year%400==0)
		printf("%d ",year) ;	
	}
	/*else
	{
		printf("���겻�����ꡣ\n") ;
	
	return 0; 
}
//�ж��Ƿ�Ϊ��д��ĸ��ת�� 
1.int main()
{
	char c,c1,c2; 
	scanf("%c",&c);
	if(c>55&&c<91)
	{
		printf("������Ǵ�д��ĸ��\n");
		c1=c+32;
		printf("%c",c1);
	}
	else
	{
		printf("��������Ǵ�д��ĸ��\n");
		c2=c-32;
		printf("%c",c2);
	}
	return 0; 
}
2.int main()
{
	char c,c1,c2;
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	{
		printf("������Ǵ�д��ĸ��\n");
		c1=c+32;
		printf("%c",c1);
	}
	else
	{
		printf("��������Ǵ�д��ĸ��\n");
		c2=c-32;
		printf("%c",c2);
	}
	return 0;
}
3.int main()
{
	char c;
	scanf("%c",&c);
	c=(c>='A'&&c<='Z')?(c+32):c;
	printf("%c",c);
	return 0;
}
// ���ñ��ʽ1�����ʽ2�����ʽ����
//������ʽ1�����Ļ�����ִ�б��ʽ2������ִ�б��ʽ3 
int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	(a>b)?printf("%d",a):printf("%d",b);
	return 0;
} 
int main()
{
	int i=100;
	while(i<=300)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
} 
int main()
{
	double t=0.0,t1=0.0;
	int n=0;
	while(t<300)
	{
		printf("�������%d���˵�ʱ��:\n",n+1);
		scanf("%lf",&t1);
		t=t+t1;
		n=n+1;
		if(n>=100)
			break;
	}
	printf("һ������%d���ˣ�������%.3lf���ӡ�\n",n,t);
	return 0;
}
int main()
{
	int i=99;
	while(i<300)
	{
		i++;
		if(i%4==0)
		{
			continue;
		}
		printf("%d ",i);
	}
	return 0;
}
//ѡ�񷨳���Ԫ��
int main()
{
	int a[10],i,t,j;
	//�������������������װ�������� 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }
    //���±�Ϊ0�Ŀ�ʼ�ֱ�ͺ����Ԫ�رȽϴ�С 
    for(i=0;i<9;i++)
    {//�ֱ�ͺ����Ǹ�Ԫ�رȽϴ�С 
    	for(j=i+1;j<10;j++)
    	{
    		if(a[i]>a[j])
    		{
    			t=a[i];
		        a[i]=a[j];
		        a[j]=t;	
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
//ð�ݷ���������������Ԫ��(����Խϴ���Ǹ�����������棩 
int main()
{
	int arr[10],i,t;
	//��Ԫ�ط��������� 
	for(i=0;i<10;i++)
	{
	    scanf("%d",&arr[i]);	
	}
	//����Խϴ��Ԫ�ط��ں���
	int j;
	for(j=0;j<=9;j++) 
	{
		for(i=0;i<=8-j;i++)
		{
			if(arr[i]>arr[i+1])
			{
			    t=arr[i];
			    arr[i]=arr[i+1];
			    arr[i+1]=t;
			}
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
} 
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
	        b[j][i]=a[i][j];	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
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
int main()
{
	char a[3][3]={{' ','*',' '},{'*',' ','*'},{' ','*',' '}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//I am a little girl live in the big world
int main()
{
	char c[81];
	int n=1,i;
	gets(c);
	if(c[0]==' ')
	{
	    n=0;
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' '&&c[i+1]!=' '&&c[i+1]!='\0')
		{
			    n++;
		}
	}

	printf("%d",n);
	return 0;
}
//������ʹ�� 
int main()
{
	//���������� 
	double aver(double a[],int n);
	double a1[5],a2[10];
	int i; 
	//��ȡ���ݲ����������� 
	printf("�������һ��ѧ���ĳɼ�:\n");
	for(i=0;i<5;i++)
	{
		scanf("%lf",&a1[i]);
	}
	printf("������ڶ���ѧ���ĳɼ�:\n");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a2[i]);
	}
	//�����ĵ��� 
	printf("��һ���ƽ���ɼ���:%.2lf\n",aver(a1,5));
	printf("�ڶ����ƽ���ɼ���:%.2lf\n",aver(a2,10));
	return 0;
}
//�����Ķ��� 
double aver(double a[],int n)
{
	int i=0;
	double average=0.0,sum=0.0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	return average;	
}
//�����޲κ�����Ҳ����û�з���ֵ�ĺ�����
int main()
{
	//���������� 
	void a();
	void b();
	void c();
	//�����ĵ���
	a();
	b();
	c();
	return 0;
} 
//�����Ķ��� 
void a()
{
	printf("123456\n");
}
void b()
{
	printf("We only have one earth.\n");
}
void c()
{
	printf("654321\n");
}
//������������������ 
int main()
{
	//����������
	void Paixu(int a[],int n); 
	int a[10],i=0;
	printf("������һ��������\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	//�����ĵ��� 
	Paixu(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
//�����Ķ���
void Paixu(int a[],int n)
{
	int i=0,j=0,t=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
} 
//������Ƕ�� 
int max4(int a,int b,int c,int d);
int main()
{
	int a,b,c,d,MAX;
	printf("�������ĸ�������\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	MAX=max4(a,b,c,d);
	printf("�������:%d",MAX);
	return 0;
} 
int max4(int a,int b,int c,int d)
{
	return max2(max2(max2(a,b),c),d);
}
int max2(int a,int b)
{
	return(a>b?a:b);
}
//�����ĵݹ�
//�������� 
int age(int n);
int main()
{
	age(5);
	printf("�����ͬѧ��������:%d",age(5)) ;
	return 0;
} 
int age(int n)
{
	int Y;
	if(n==1)
	{
		Y=10;
	}
	else
	{
		Y=age(n-1)+2;
	}
	return Y;
}
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
	printf("����Ǹ���Ϊ%d��С���Ǹ���Ϊ%d",*p,*q);
	return 0;
}
//ָ�� 
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
    printf("����Ǹ���Ϊ%d��С���Ǹ���Ϊ%d",*p,*q);
	return 0;
}
*/
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














