#include<stdio.h>
//�����¿κ����� 
/*
int main(void)
{
	int A;
	printf("������һ��ASCII�룺");
	scanf("%d",&A);
	printf("%c",A);
	return 0;
}
int main(void)
{
	printf("\a");
	printf("Startled by the sudden sound,Sally shouted,\n");
	printf("\"By the Great Pumpkin,What was that!\"");
	return 0; 
} 
int main(void)
{
	double a;
	printf("Enter a floating-point value: ");
	scanf("%lf",&a);
	printf("fixed-point notation: %lf\n",a);
	printf("exponential-notation: %e\n",a);
	printf("p notation: %a",a);
	return 0;
}
int main(void)
{
	long double count;
	int age;
	printf("������������䣺");
	scanf("%d",&age);
	count=age*3.156*(10^7);
	printf("�������%d���Ӧ����Ϊ%e",age,count);
	return 0;
}
int main(void)
{
	float number;
	float molecules;
	float mass_mol=3.0e-23;
	float mass_qt = 950;
	printf("������ˮ�Ŀ���ˮ����\n");
	scanf("%f",&number);
	molecules=number*mass_qt/mass_mol;
	printf("%f��˵�ˮ��Ӧ��ˮ������Ϊ%e",number,molecules);
	return 0; 
}
*/
int main()
{
	float height,cm;
	float middle=2.54;
	printf("Please input your height(/inch):");
	scanf("%f",&height);
	cm=middle*height;
	printf("Your height corresponds to %.2f cm",cm);
	return 0;
}


































