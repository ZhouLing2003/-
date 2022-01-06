#include<stdio.h>
int main(){
	int height;
	scanf("%d",&height);
	int foot;
	int inch;
    foot=height/30.48;
    inch=((height/30.48)-foot)*12;
    printf("%d %d",foot,inch);
    return 0;
}
