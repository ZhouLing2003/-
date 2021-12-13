#include<stdio.h>
int main(){
/*	int a,b;
	int i=0; 
	printf("请输入两个数：");
	scanf("%d %d",&a,&b);
*/
  int a=56;
  int b=28;
  int i=0;
  scanf("%d %d",&a,&b);
	while(a%b)
	{
        i=a%b;
        a=b;
        b=i;
	}
    printf("最大公约数为：%d\n",b);
	return 0;
}
