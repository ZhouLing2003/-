#include<stdio.h>
#include<string.h>
struct BOOK{
	char name[20];
	char price;
};
int main(){
	struct BOOK b1={
		"C���Գ������",55 
	};
	//����ֱ���޸ļ۸� 
	b1.price=15;
	//�ַ����������ڴ������������޸ģ�
	//strcpy-string copy-�⺯��������ʹ�õ�ʱ���������) 
	strcpy(b1.name ,"C++");
	printf("�����ǣ���%s��\n",b1.name);
	printf("��ļ۸���%dԪ\n",b1.price);
	struct BOOK*pb=&b1;
	printf("��ļ۸���%dԪ\n",(*pb).price);
	printf("��������ǡ�%s��\n",(*pb).name); 
	printf("��ļ۸���%d\n",pb->price);
	printf("���������%s\n",pb->name); 
	return 0; 
}
