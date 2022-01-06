#include<stdio.h>
int main(){
	const int PASS=60;
	int score;
	printf("请输入你的成绩是：");
	scanf("%d",&score);
	printf("你的成绩为%d\n",score);
	if(score<PASS){
		printf("很遗憾，你的成绩没有及格。\n");
	} 
	else {
		printf("恭喜你取得了优异的成绩!\n");
		printf("再见!\n");
	}
	return 0;
}
