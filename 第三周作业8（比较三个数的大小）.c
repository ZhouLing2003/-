#include<stdio.h>
int main(){
	const int PASS=60;
	int score;
	printf("��������ĳɼ��ǣ�");
	scanf("%d",&score);
	printf("��ĳɼ�Ϊ%d\n",score);
	if(score<PASS){
		printf("���ź�����ĳɼ�û�м���\n");
	} 
	else {
		printf("��ϲ��ȡ��������ĳɼ�!\n");
		printf("�ټ�!\n");
	}
	return 0;
}
