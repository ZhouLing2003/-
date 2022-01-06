#include<stdio.h>
int Add(int x,int y)
{
	int z=x+y;
	return z;
}
int main(){

int num1=10;
int num2=20;
int sum=num1+num2;
int a=100;
int b=200;
sum=Add(num1,num2);
sum=Add(a,b);
printf("sum=%d\n",sum);
return 0;
}
