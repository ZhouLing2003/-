#include<stdio.h>
int main(){
void test()
{
static int a=1;
 a++;
 printf("a=%d\n",a);
}
 int i=0;
while(i<5){
	test();
	i++;
}
return 0;
}

