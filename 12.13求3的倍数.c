#include<stdio.h>
int main(){
	int i=0; 
	int count;
	for(i=1;i<100;i++)
  {
	if(i%3==0)
	{
		count++;
	printf("%d ",i);	
	}
  }
  printf("\n一共有%d个数",count);
  return 0;
}
