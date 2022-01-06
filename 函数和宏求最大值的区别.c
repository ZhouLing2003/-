#include<stdio.h>
#define MAX(X,Y)(X>Y?X:Y)
int main(){
	int a=10;
	int b=20;
	//函数的方式求最大值 
	int max=MAX(a,b);
	printf("max=%d\n",max);
	//宏的方式求最大值 
	max=MAX(a,b);
	printf("max=%d\n",max) ;
	return 0;
}
