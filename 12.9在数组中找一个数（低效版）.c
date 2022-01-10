//写一个代码在一个有序数组中找到7 
#include<stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int k=17;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
	if(k==arr[i])
	{
		printf("找到了\n");
		printf("这个数的下标为%d\n",i);
	}
    }
	if(i==sz)
	{
		printf("找不到这个数。\n");
	}
	return 0;
}
