#include<stdio.h>
int main(void){
	int grade;
	printf("请输入你的成绩：\n");
	scanf("%d",&grade);
	grade/=10;
	switch(grade){
		case 10:printf("A+\n");
		break;
		case 9:printf("A\n");
		break;
		case 8:printf("B\n");
		break;
		case 7:printf("C\n");
		break;
		case 6:printf("D\n");
		break;
	default:printf("很遗憾，你没有及格！\n");
               	}
return 0;
}
