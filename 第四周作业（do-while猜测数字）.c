#include<stdio.h>
int main(){
	   int number = rand()%100+1;
	   int count=0;
	   int a;
	   printf("���Ѿ�������������\n");
	   do{
	   printf("��²����0-100������\n");
	   scanf("%d",&a);
	   	if(a>number){
	   		printf("��²�������ˣ�\n");
		   }
		if(a<number){
			printf("��²����С�ˣ�\n");
		}
		count++;
		   }
		   while(a!=number);
	   printf("�㻨��%d�ξͲ¶������֣�\n",count);
	   return 0;
	   }

