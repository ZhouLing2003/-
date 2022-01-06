#include<stdio.h>
//选择法呈现元素
int main()
{
	int a[10],i,t,j;
	//读入键盘所给出的数据装在数组中 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }
    //从下标为0的开始分别和后面的元素比较大小 
    for(i=0;i<9;i++)
    {//分别和后面那个元素比较大小 
    	for(j=i+1;j<10;j++)
    	{
    		if(a[i]>a[j])
    		{
    			t=a[i];
		        a[i]=a[j];
		        a[j]=t;	
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
