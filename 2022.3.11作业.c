/*
#include <stdio.h>
void reOut(int (*p)[3]);
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
            printf("%3d",p[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%3d",p[j][i]);
        }
        printf("\n");
    }
}
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len( char *s[], int n );

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}
int max_len( char *s[], int n )
{
	
}





