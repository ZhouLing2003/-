//дһ��������һ�������������ҵ�7 
#include<stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int k=17;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
	if(k==arr[i])
	{
		printf("�ҵ���\n");
		printf("��������±�Ϊ%d\n",i);
	}
    }
	if(i==sz)
	{
		printf("�Ҳ����������\n");
	}
	return 0;
}
