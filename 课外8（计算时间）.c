#include<stdio.h>
int main(){ 
	int a;
	int b;  
	int t;
	scanf("%d %d",&a,&b);
	a=a/100*60+(a%100);
	t=(a+b)/60*100+(a+b)%60;
	printf("%d",t);
	return 0;	
}

