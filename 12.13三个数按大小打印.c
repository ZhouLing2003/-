#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	int c=0;
	int t1=a;
	int t2=b;
	printf("请输入三个数：\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		int t=a;
		a=b;
		b=t;
	}
	if(a<c){
		int t=a;
		a=c;
		c=t;
	}
	if(b<c){
		int t=b;
		b=c;
		c=t;
	} 
	printf("%d %d %d",a,b,c);
/*	
    if(a>b){
		if(c>a){
			int a=c;
			int b=t1;
			int c=t2;
		}
		if(b>c){
			int a=t1;
			int b=t2;
			int c=c;
		}
 	if(a<b){
		if(c>b){
			int a=c;
			int b=t2;
			int c=t1;
		}
		if(a>c){
			int a=t2;
			int b=t1;
			int c=c;
		}
	}
           }
    printf("%d %d %d",a,b,c);
*/
	return 0;
}


