#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	b=a/16;
	c=a-b*16;
	printf("%d",b*10+c);
	return 0;
}
