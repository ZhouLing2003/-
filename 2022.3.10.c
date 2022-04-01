#include <stdio.h>
void reOut(int (*p)[3]);//––÷∏’Î 

int main()
{
    void reOut(int (*p)[3]);
    int i, j, a[2][3], (*p)[3];
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
        scanf("%d", &a[i][j]);
    p= a;
    reOut(p); 
}
void reOut(int (*p)[3])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	    {
		    printf("%d ",*((*p+i)+j));
	    }
	    if(j==3)
	    printf("\n");
	}
}

