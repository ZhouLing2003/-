/*#include<stdio.h>
#include<string.h> 
int main()
{
	char string[5][20];
	char str[20];
	int i;
	for(i=0;i<5;i++)
		scanf("%s",string[i]);
	for(i=0;i<5;i++)
	{
		printf("%s\n",string[i]);
	}	
	for(i=0;i<4;i++)
	{
		if(strcmp(string[i],string[i+1])<0)
		{
			strcpy(str,string[i]);
			strcpy(str[i],string[i+1]);
			strcpy(str[i+1],str);
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n",string[i]);
	}
	return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[80], *pstr;
    int i, j, k, m, e10, digit, ndigit, a[80], *pa;

    gets(str);
    pstr = str;           /* �ַ�ָ��pstr��������str�׵�ַ */
    pa=a;
    ndigit = 0;              /* ndigit�����ж��ٸ����� */
    i = 0;                    /* �����ַ����е�n���ַ� */
    j = 0;                    /* �����������ֵ�λ�� */
    while (1)
    {
        if ((*(pstr + i) >= '0') && (*(pstr + i) <= '9'))
        {
            j++;
        }
        else
        {
            if (j > 0)
            {
                digit=*(pstr + i);
                k = 1;
                while (k < j)     
                {
                    e10=1;
                    for (m=1; m<=k; m++)
                    {
                        e10=e10*10;       /* e10�����λ����Ӧ�˵����� */
                    }
                    digit = digit + (*(pstr + i - 1 - k) - '0') * e10;     
                    k++;                 
                }
                a[i]=digit;
                 ndigit++;
                pa++;                     
                j = 0;
            }
        }
        if ('\0' == *(pstr + i))
        {
            break;
        }
        i++;
    }

    printf("There are %d numbers in this line.They are:\n", ndigit);
    for(j=0; j<ndigit; j++)              /* ��ʾ���� */
    {
        printf("%d ", a[j]);
    }
    printf("\n");

    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
