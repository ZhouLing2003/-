#include<stdio.h>
int main(){
	//��ʼֵ
	int price=0;
	int bill=0;
	//��ȡ����Ƭ��
	printf("�������\n");
	scanf("%d",&price) ;
	printf("������Ʊ�棺\n");
	scanf("%d",&bill) ;
	//��������
	if (bill>=price){printf("����%dԪ��",bill-price);} 
	return 0;
	 
} 
