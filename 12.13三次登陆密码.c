#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main(){
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("请输入密码：->");
		scanf("%s",password);//等号不能用来比较两个字符串是否相等 
		if (0==strcmp(password,"123456"))//应该使用一个库函数strcmp 
		{
		printf("密码正确\n");
		break;	
		}
		else
		{
		printf("密码错误\n");
		}
	} 
	if(3==i)
	{
	printf("三次密码均错误，登陆失败\n"); 
	}
	return 0;	
}

