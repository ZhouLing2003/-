#include<stdio.h>
#define MAX(X,Y)(X>Y?X:Y)
int main(){
	int a=10;
	int b=20;
	//�����ķ�ʽ�����ֵ 
	int max=MAX(a,b);
	printf("max=%d\n",max);
	//��ķ�ʽ�����ֵ 
	max=MAX(a,b);
	printf("max=%d\n",max) ;
	return 0;
}
