#include<stdio.h>
//ѡ�񷨳���Ԫ��
int main()
{
	int a[10],i,t,j;
	//�������������������װ�������� 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }
    //���±�Ϊ0�Ŀ�ʼ�ֱ�ͺ����Ԫ�رȽϴ�С 
    for(i=0;i<9;i++)
    {//�ֱ�ͺ����Ǹ�Ԫ�رȽϴ�С 
    	for(j=i+1;j<10;j++)
    	{
    		if(a[i]>a[j])
    		{
    			t=a[i];
		        a[i]=a[j];
		        a[j]=t;	
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
