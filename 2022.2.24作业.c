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
	
	p=array;//pΪarray�����һ��Ԫ�صĵ�ַ 
	
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
    int *ptr, arrA[5];//����ֱ�Ϊ1 2 3 4 5 
    //��������Ԫ��
    //ptr�������һ��Ԫ�صĵ�ַ 
    for ( ptr=arrA; ptr<arrA+5; ptr++)
    {
        scanf("%d",ptr);
    }
        //�������Ԫ��
    ptr=arrA;    
    for(;  ptr<arrA+5;   ptr++)
    {
        printf("%d ",*ptr);
    }
    printf("\n");

    return 0;
}
 

