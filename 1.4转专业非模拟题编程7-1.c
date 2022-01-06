#include<stdio.h>
int main()
{
    int i=0,b,a[10],flag;
    while(i!=10)
    {
        scanf("%d",&b);
        if(i==0)
        {
            a[i]=b;
            i++;
        }
        else if(b>a[i-1])
            {
                a[i]=b;
                i++;
            }
    }
    scanf("%d",&b);
    flag=0;
    for(i=0;i<10;i++)
    {
        if(a[i]==b)
        {
            printf("%d",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Not Find!");
    return 0;
}

