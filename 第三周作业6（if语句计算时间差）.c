#include<stdio.h>;
int main(){
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d,%d",&hour1,&minute1);
	scanf("%d,%d",&hour2,&minute2);
	int ih=hour1-hour2;
	int im=minute1-minute2;
	if(im<0){
		im=im+60;
		ih--;
	}
	printf("时间差为%d小时%d分。\n",ih,im);
	return 0;
}
