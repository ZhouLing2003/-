#include<stdio.h>;
int main(){
	double a=3.14;
	double*p=&a;
	printf("%p\n",p);
	printf("%p\n",&a);
	*p=6.18;
	printf("a=%lf",a);
	//此处用lf打印更准确，虽然用f也可以。 
	return 0;
}

