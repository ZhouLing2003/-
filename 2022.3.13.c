
#include<stdio.h>
#include<string.h> 
int main()
{
	char string[5][20],str[20];
	int i,j;
	printf("�������ַ�����\n");
	for(i=0;i<5;i++)
		scanf("%s",string[i]);
    for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(string[i],string[j])>0)
			{
				strcpy(str,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],str);
			}
		}
	}
	printf("��������Ϊ��\n");
	for(i=0;i<5;i++)
	printf("%s\n",string[i]);
	return 0;
}

