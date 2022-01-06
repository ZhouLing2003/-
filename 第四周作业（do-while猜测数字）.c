#include<stdio.h>
int main(){
	   int number = rand()%100+1;
	   int count=0;
	   int a;
	   printf("我已经想好了这个数。\n");
	   do{
	   printf("请猜测这个0-100的数：\n");
	   scanf("%d",&a);
	   	if(a>number){
	   		printf("你猜测的数大了！\n");
		   }
		if(a<number){
			printf("你猜测的数小了！\n");
		}
		count++;
		   }
		   while(a!=number);
	   printf("你花了%d次就猜对了数字！\n",count);
	   return 0;
	   }

