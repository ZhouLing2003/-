#include<stdio.h>
int main(){
	int f=0;
	int x;
	printf("������һ��ֵ��\n");
	scanf("%d",&x) ;
	if(x<0){
		f=-1;
        	}
    else if(x>5){
    	f=x*2;
            	}
    else if(x==0){
    	f=0;
	             }
	else{f=3*x;
	}
	printf("��õ���ֵΪ:%d\n",f);
	return 0;
}
