#include<stdio.h>
int main(){
	enum Sex{
		MALE,FEMALE,SECRET
	};
	enum Sex s=FEMALE;
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	return 0;
}
