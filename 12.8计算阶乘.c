#include<stdio.h>
int main(){
	int i=0;
	int n=0;
	int ret=1;
	int sum=0;
	//scanf("%d",&n);
//����һ��Ƕ��ѭ����for��ʵ�֣�
    for(n=1;n<=10;n++)
    {
    ret=1;
    for(i=1;i<=n;i++)
	{
		ret=ret*i;	
    }//�ڲ���forѭ�����ڼ���׳�
    sum=sum+ret; 
    }
/*	while(i<=n)
	{
	for(i=1;i<=n;i++)
	{
		ret=ret*i;
  	sum=sum+ret;
	}
	}*/
	printf("�׳�Ϊ:%d\n",ret); 
	printf("�׳˺�Ϊ%d\n",sum);
	return 0;
}
 
