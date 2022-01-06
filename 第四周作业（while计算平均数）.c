#include<stdio.h>
int main(){
	int sum=0;
	int count=0;
	int number;
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	double dsum=sum/count; 
	printf("The average is %.2f\n",dsum);
	return 0;	
}
