#include<stdio.h>
int main(){
/*闰年的定义：
1.能被4整除并且不能被100整除
2.能被400整除
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
 printf("有%d个闰年",count);
	return 0;
//更简洁的一种求闰年的方法

/*for(i=1000;i<=2000;i++)
{
if((i%4==0&&i%100!=0)||(i%400==0))
{
printf("%d ",i);
count++;
}	
} 
printf("闰年有%d个",count);
return 0;
*/
}
