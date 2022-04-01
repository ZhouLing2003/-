/*
#include<stdio.h>
int main()
{
	int a=3,b=4;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf(" * p1=%d, * p2=%d",*p1,*p2);
	return 0;
} 
******************************************
int main()
{
	int array[5],*p,i;
	
	p=array;//p为array数组第一个元素的地址 
	
	printf("please input 5 numbers:");
	
	for(i=0;i<5;i++)
	{
	    scanf("%d",p++);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p++));
	}
	
	return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int *ptr, arrA[5];//比如分别为1 2 3 4 5 
    //读入数组元素
    //ptr放数组第一个元素的地址 
    for ( ptr=arrA; ptr<arrA+5; ptr++)
    {
        scanf("%d",ptr);
    }
        //输出数组元素
    ptr=arrA;    
    for(;  ptr<arrA+5;   ptr++)
    {
        printf("%d ",*ptr);
    }
    printf("\n");

    return 0;
}
 

