#include<stdio.h>
int main(){
	//��ʼ��
	int price=0;
	int bill=0;
	//��ȡ����Ʊ��
	printf("�������\n");
	scanf("%d",&price);
	printf("������Ʊ�棺\n");
	scanf("%d",&bill);
	//��������
	if(bill>price){
		printf("����%dԪ\n",bill-price);
	}
	else{printf("����Ǯ������\n");
	}
	return 0;	
}
