#include<stdio.h>
#include<math.h> 
/*
int main(){
	int i=0; 
	int count=0;
for(i=100;i<=200;i++)//�涨�����������ķ�Χ
{                       
	int j=0;         //����������������
	for(j=2;j<i;j++) 
	{                
		if(i%j==0)  
		{
			break;
		}
	} 
	if(i==j)
	{
		count++;
		printf("%d ",i);
	}
}
printf("\nһ����%d������",count);
return 0;
}
*/
int main(){
	int count=0;
	int i=0;
	for(i=100;i<=200;i++)
	{
	 int j=0;
	 for(j=2;j<=sqrt(i);j++)//-sqrt��һ����ƽ������ѧ�⺯�� 
	 {
		if(i%j==0)
		{
			break; 
		}
	 }
	 if(j>sqrt(i))
	 {
	    count++;
	 	printf("%d ",i);
	 }	
	}
	printf("\nһ������%d��������",count);
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
