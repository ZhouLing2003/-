#include<stdio.h>
int main(){
	int ret=0;
	char password[20]={0};
	printf("请输入密码：>\n");
	scanf("%s",password);
	printf("请确认密码（Y/N)\n");
	ret=getchar();
	if(ret=='Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
