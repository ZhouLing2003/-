#include<stdio.h>;
int main(){
	double a=3.14;
	double*p=&a;
	printf("%p\n",p);
	printf("%p\n",&a);
	*p=6.18;
	printf("a=%lf",a);
	//�˴���lf��ӡ��׼ȷ����Ȼ��fҲ���ԡ� 
	return 0;
}

