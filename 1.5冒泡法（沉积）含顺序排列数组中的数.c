#include<stdio.h> 
//冒泡法（沉积法）呈现元素(把相对较大的那个数放在最后面） 
int main()
{
	int arr[10],i,t;
	//把元素放在数组中 
	for(i=0;i<10;i++)
	{
	    scanf("%d",&arr[i]);	
	}
	//把相对较大的元素放在后面
	int j;
	for(j=0;j<=9;j++) 
	{
		for(i=0;i<=8-j;i++)
		{
			if(arr[i]>arr[i+1])
			{
			    t=arr[i];
			    arr[i]=arr[i+1];
			    arr[i+1]=t;
			}
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
} 
