#include<stdio.h>
int main(){
	int n;
	int count=0;
	printf("������һ����ϲ�������֣�\n"); 
	scanf("%d",&n);
	while(n>=0){
		count++;
		n--;
	}
	printf("%d",count);
	printf("���䣡\n");
	return 0; 
} 
