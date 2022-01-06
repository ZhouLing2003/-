#include<stdio.h>
int main(){
	int n;
	int count=0;
	printf("请输入一个你喜欢的数字：\n"); 
	scanf("%d",&n);
	while(n>=0){
		count++;
		n--;
	}
	printf("%d",count);
	printf("发射！\n");
	return 0; 
} 
