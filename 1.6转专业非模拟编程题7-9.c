#include<stdio.h>
//��������
void mystrlen(char*str); 
int main()
{
	int i;
	char arr[]="It's great to see you here.";
//�������� 
	mystrlen(arr);
	return 0; 
}
//�������� 
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
