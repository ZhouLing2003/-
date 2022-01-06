#include<stdio.h>
//大写字母变小写 
/*
int main()
{
	char a;
	scanf("%c",&a);
	a=a+32;
	printf("%c",a);
	return 0; 
}
//小写字母转大写 
int main()
{
	char a;
	scanf("%c",&a);
	a=a-32;
	printf("%c",a);
	return 0;
} 
//putchar&gerchar的使用 
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
//取含小数的数的个位，十位，百位 
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
//if的分段函数 
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
//判断是否为闰年 
int main()
{
	int year;
	printf("请输入一个年份：");
	scanf("%d",&year);
	for(year=1000;year<2000;year++)
	{
		if(year%4==0&&year%10!=0||year%400==0)
		printf("%d ",year) ;	
	}
	/*else
	{
		printf("该年不是闰年。\n") ;
	
	return 0; 
}
//判断是否为大写字母并转换 
1.int main()
{
	char c,c1,c2; 
	scanf("%c",&c);
	if(c>55&&c<91)
	{
		printf("这个数是大写字母。\n");
		c1=c+32;
		printf("%c",c1);
	}
	else
	{
		printf("这个数不是大写字母。\n");
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
		printf("这个数是大写字母。\n");
		c1=c+32;
		printf("%c",c1);
	}
	else
	{
		printf("这个数不是大写字母。\n");
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
// 利用表达式1？表达式2：表达式三；
//如果表达式1成立的话，则执行表达式2；否则执行表达式3 
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
		printf("请输入第%d个人的时间:\n",n+1);
		scanf("%lf",&t1);
		t=t+t1;
		n=n+1;
		if(n>=100)
			break;
	}
	printf("一共看了%d个人，花费了%.3lf分钟。\n",n,t);
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
//选择法呈现元素
int main()
{
	int a[10],i,t,j;
	//读入键盘所给出的数据装在数组中 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }
    //从下标为0的开始分别和后面的元素比较大小 
    for(i=0;i<9;i++)
    {//分别和后面那个元素比较大小 
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
//冒泡法（沉积法）呈现元素(把相对较大的那个数放在最后面） 
int main()
{
	int arr[10],i,t;
	//把元素放在数组中 
	for(i=0;i<10;i++)
	{
	    scanf("%d",&arr[i]);	
	}
	//把相对较大的元素放在后面
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
//函数的使用 
int main()
{
	//函数的声明 
	double aver(double a[],int n);
	double a1[5],a2[10];
	int i; 
	//读取数据并放入数组中 
	printf("请输入第一组学生的成绩:\n");
	for(i=0;i<5;i++)
	{
		scanf("%lf",&a1[i]);
	}
	printf("请输入第二组学生的成绩:\n");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a2[i]);
	}
	//函数的调用 
	printf("第一组的平均成绩是:%.2lf\n",aver(a1,5));
	printf("第二组的平均成绩是:%.2lf\n",aver(a2,10));
	return 0;
}
//函数的定义 
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
//调用无参函数（也就是没有返回值的函数）
int main()
{
	//函数的声明 
	void a();
	void b();
	void c();
	//函数的调用
	a();
	b();
	c();
	return 0;
} 
//函数的定义 
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
//函数方法升序排列数 
int main()
{
	//函数的声明
	void Paixu(int a[],int n); 
	int a[10],i=0;
	printf("请输入一组整数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	//函数的调用 
	Paixu(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
//函数的定义
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
//函数的嵌套 
int max4(int a,int b,int c,int d);
int main()
{
	int a,b,c,d,MAX;
	printf("请输入四个整数：\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	MAX=max4(a,b,c,d);
	printf("最大数是:%d",MAX);
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
//函数的递归
//函数声明 
int age(int n);
int main()
{
	age(5);
	printf("第五个同学的年龄是:%d",age(5)) ;
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
//函数的声明 
int Jiecheng(int n);
int main()
{
	int n;
	printf("请输入一个数:\n");
	scanf("%d",&n);
//函数的调用 
    if(n>=0)
	{
	    printf("%d的阶乘是%d\n",n,Jiecheng(n));	
	}
	else
	{
		Jiecheng(n);
	}
return 0;
}
//函数的定义 
int Jiecheng(int n)
{
	int t;
	if(n<0)
		printf("你的数字输错了，负数没有阶乘。");
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
	printf("请输入两个数：\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)//通过交换指向的元素来使数按顺序打印 
	{
		r=p;
		p=q;
		q=r;
	}
	printf("大的那个数为%d，小的那个数为%d",*p,*q);
	return 0;
}
//指针 
int main()
{
	int*p,*q,r,a,b;
	printf("请输入两个数：\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(a<b)
	{
		r=*p;
	    *p=*q;
		*q=r;	
	}
    printf("大的那个数为%d，小的那个数为%d",*p,*q);
	return 0;
}
*/
//函数声明
int print(int n); 
int main()
{
	unsigned int num=0;
	printf("请输入一串数字：\n");
	scanf("%d",&num);
//函数调用 
	print(num);
	return 0;
}
//函数定义
int print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
} 














