#include<stdio.h>
int main(){
/*	int a,b;
	int i=0; 
	printf("��������������");
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
    printf("���Լ��Ϊ��%d\n",b);
	return 0;
}
