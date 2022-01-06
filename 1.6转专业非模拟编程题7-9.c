#include<stdio.h>
//函数声明
void mystrlen(char*str); 
int main()
{
	int i;
	char arr[]="It's great to see you here.";
//函数调用 
	mystrlen(arr);
	return 0; 
}
//函数定义 
void mystrlen(char*str)
{
	int count=0;
	while(*str!='.')
	{
	    //while(*str!=' ')
		//{
		    count++;
	        str++;
	    //}
	    //printf("%d",count);
		//if(*str==' ')
	    //{
		    //str++;
		    //printf(" ");
        //}	
	}
	printf("%d",count);
	
	
}
