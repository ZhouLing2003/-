#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int max;
	max=b;
	if(a>b){
		max=a;
	}
	printf("����Ǹ���Ϊ��%d\n",max);
	return 0;
}
