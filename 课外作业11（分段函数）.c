#include<stdio.h>
int main(){
	int x;
	int y;
	scanf("%f",&x);
	if(x=0){
		y=0; 
		printf("f(%.2f)=%.2f",x,y);
	}
	else{
		y=1/x;
		printf("f(%.2f)=%.2f",x,y); 
	}
	return 0;
}

