#include<stdio.h>
int main(void){
	int grade;
	printf("��������ĳɼ���\n");
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
	default:printf("���ź�����û�м���\n");
               	}
return 0;
}
