#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main(){
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("���������룺->");
		scanf("%s",password);//�ȺŲ��������Ƚ������ַ����Ƿ���� 
		if (0==strcmp(password,"123456"))//Ӧ��ʹ��һ���⺯��strcmp 
		{
		printf("������ȷ\n");
		break;	
		}
		else
		{
		printf("�������\n");
		}
	} 
	if(3==i)
	{
	printf("������������󣬵�½ʧ��\n"); 
	}
	return 0;	
}

