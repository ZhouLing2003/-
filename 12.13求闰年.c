#include<stdio.h>
int main(){
/*����Ķ��壺
1.�ܱ�4�������Ҳ��ܱ�100����
2.�ܱ�400����
*/
int i=0;
int count=0;
for(i=1000;i<=2000;i++)
 {
 	if(i%4==0&&i%100!=0)
	{
 	printf("%d ",i);
 	count++;
	}
 	else if(i%400==0)
 	{
 	printf("%d ",i);
 	count++;
	}	
 } 
 printf("��%d������",count);
	return 0;
//������һ��������ķ���

/*for(i=1000;i<=2000;i++)
{
if((i%4==0&&i%100!=0)||(i%400==0))
{
printf("%d ",i);
count++;
}	
} 
printf("������%d��",count);
return 0;
*/
}
