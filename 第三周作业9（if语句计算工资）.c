#include<stdio.h>
int main(){
	const double RATE=8.25;
	const int STANDARD=40;
	int hour=0;
	double pay=0;
	printf("�����빤����Сʱ����\n");
	scanf("%d",&hour);
	if(hour>STANDARD){
	pay=STANDARD*RATE+(hour-STANDARD)*RATE*1.5;
    printf("����Ϊ��%.2f\n",pay);
	}
    else{
    	pay=hour*8.25;
    	printf("����Ϊ��%.2f\n",pay);
	}
	return 0;
}
