#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h> 
 
int main(){
	char arr1[]="welcome to bit!!!!!";
	char arr2[]="###################";
	int left=0;
	int right=strlen(arr1)-1;
	while(left<=right)
	{
	arr2[left]=arr1[left];
	arr2[right]=arr1[right];
    printf("%s\n",arr2);
    //休息一秒
	sleep(1); 
	system("cls");//cls叫清空屏幕；system是执行系统命令的一个函数 
    left++;
    right--;
    }
    printf("%s",arr2);
	return 0; 
}
 
