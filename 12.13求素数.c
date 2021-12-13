#include<stdio.h>
#include<math.h> 
/*
int main(){
	int i=0; 
	int count=0;
for(i=100;i<=200;i++)//规定了所求素数的范围
{                       
	int j=0;         //接下来就是求素数
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
printf("\n一共有%d个素数",count);
return 0;
}
*/
int main(){
	int count=0;
	int i=0;
	for(i=100;i<=200;i++)
	{
	 int j=0;
	 for(j=2;j<=sqrt(i);j++)//-sqrt是一个开平方的数学库函数 
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
	printf("\n一共是有%d个素数。",count);
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
