#include<stdio.h> 
//ð�ݷ���������������Ԫ��(����Խϴ���Ǹ�����������棩 
int main()
{
	int arr[10],i,t;
	//��Ԫ�ط��������� 
	for(i=0;i<10;i++)
	{
	    scanf("%d",&arr[i]);	
	}
	//����Խϴ��Ԫ�ط��ں���
	int j;
	for(j=0;j<=9;j++) 
	{
		for(i=0;i<=8-j;i++)
		{
			if(arr[i]>arr[i+1])
			{
			    t=arr[i];
			    arr[i]=arr[i+1];
			    arr[i+1]=t;
			}
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
} 
