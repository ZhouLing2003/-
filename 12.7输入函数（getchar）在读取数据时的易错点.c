#include<stdio.h>
int main(){
	int ret=0;
	char password[20]={0};
	printf("���������룺>\n");
	scanf("%s",password);
	printf("��ȷ�����루Y/N)\n");
	ret=getchar();
	if(ret=='Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}
