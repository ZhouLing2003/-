#include<stdio.h>
int main(){
	//初始值
	int price=0;
	int bill=0;
	//读取金额和片面
	printf("请输入金额：\n");
	scanf("%d",&price) ;
	printf("请输入票面：\n");
	scanf("%d",&bill) ;
	//计算找零
	if (bill>=price){printf("找您%d元。",bill-price);} 
	return 0;
	 
} 
