#include<stdio.h>
int main()
{
    char arr[5],max;
    int i,index;
    for(i=0;i<5;i++)
        arr[i]=getchar();
    for(i=0;i<5;i++)
	{
        if (max<arr[i])
		{
            max=arr[i];
            index=i;
        }
    }
    printf("%c %d",arr[index],arr[index]);
    return 0;
}
























