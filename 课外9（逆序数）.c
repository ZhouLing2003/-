#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int x=a/100;
	int y=(a-100*x)/10;
	int z=a-100*x-10*y;
	printf("%d",z*100+y*10+x);
	return 0;
	 
}
