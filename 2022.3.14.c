/*
#include<stdio.h>
#define MAXN 100
struct student
{
  char name[20];
  int score;
  char grade;
};
void set_grade( struct student *p, int n );

int main()
{   
  int i, n;//n��ʾ�м���ѧ�� 
  struct student stu[MAXN];
  scanf("%d", &n);
  for(i = 0; i < n; i++)//�ֱ��������ֺͳɼ� 
  {
    scanf("%s%d", stu[i].name, &stu[i].score);
  } 
  set_grade(stu, n);//���ú��� 
  for(i = 0; i < n; i++)
    printf("%s %c\n", stu[i].name, stu[i].grade);

  return 0;
}

void set_grade(struct student *p, int n)//����ṹ��ĵ�ַ���Լ��м���ѧ�� 
{    
    struct student *q = p + n - 1;//������һ��ָ��ָ��ṹ������һ�� 
    while (q>=p)
    {
    	if((p->score)>=60) (*p).grade='P';
    	else(*p).grade='F';
    	p++;
	}
}
#include <stdio.h>
#include <string.h>
#define  N  8
struct student
{
    char  num[10];
    int  year;
	int month;
	int day ;
};
struct student fun(struct student  *std, char  *num);
int main()
{
	//std��һ���ṹ������ 
    struct student  std[N]={ {"111111",1984,2,15},{"222222",1983,9,21},{"333333",1984,9,1},{"444444",1983,7,15},{"555555",1984,9,28},{"666666",1983,11,15},{"777777",1983,6,22},{"888888",1984,8,19}}; 
    struct student  p; //pҲ��һ���ṹ��        
    char  n[10]="666666";
    p=fun(std,n);//����ṹ���Լ�����Ҫ���ҵı�� 
    if(p.num[0]==0)
    {
        printf("Not found !\n");	
	}
    else
    { 
        printf("Succeed !\n  ");
        printf("%s   %d-%d-%d\n",p.num,p.year,p.month,p.day);
    }
return 0;
}
struct student fun(struct student  *std, char  *num)//������ָ�� 
{
	int i;
	for(i=0;i<N;i++)
	{
		if(strcmp(std[i].num,num)==0)
			return std[i];
	}
	return ;
}
#include <stdio.h>
struct student                    
{
int num;
char name[15];
float score[3];
float sum;
};
void calc(struct student *p,int n);     
void sort(struct student *p,int n);
int main()
{
struct student stu[5];
int i,j;
float f;
for(i=0;i<5;i++)
{
    scanf("%d%s",&stu[i].num,stu[i].name);
    for(j=0;j<3;j++)
    { 
        scanf("%f",&f);
        stu[i].score[j]=f;
    }
}
calc(stu,5);
sort(stu,5);
for(i=0;i<5;i++)
{
    printf("%5d%15s",stu[i].num,stu[i].name);
    printf("  %.1f  %.1f  %.1f  %.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2], stu[i].sum);
}
return 0;
void calc(struct student *p,int n)//����ܷ� 
{
	float tol;
	int i,j;
	for(i=0;i<n;i++)
	{
		tol=0;
		for(j=0;j<3;j++)
	    {
	        tol=tol+p[i].score[j];
	    }
	    p[i].sum=tol;
	}	
}   
void sort(struct student *p,int n)//��ѧ���ֽܷ��н���������ߵ���ǰ�� 
{
	int i,j;
	struct student a;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].sum<p[j].sum)
			{
                a=p[i];
                p[i]=p[j];
                p[j]=a;
			}
		}
	}
}
*/
#include <stdio.h>
struct student/*ѧ����Ϣ�ṹ����*/
{       
  int num;            /* ѧ�� */
  char name[10];      /* ���� */
  int math, english, computer;   /* ���ſγ̳ɼ� */
}; 
int update_score(struct student *p, int n, int num, int course, int score); /*��������*/

int main(void)
{    
  int i, pos, n, num, course, score;
  struct student students[50];   /* ����ṹ���� */
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    scanf("%d", &students[i].num);
    scanf("%s", students[i].name); 
    scanf("%d", &students[i].math); 
    scanf("%d", &students[i].english); 
    scanf("%d", &students[i].computer);
  }
  
  /* ������޸�ѧ����Ϣ */
  scanf("%d", &num);
  scanf("%d", &course);
  scanf("%d", &score);

  /*���ú������޸�ѧ���ɼ�*/
  pos = update_score(students, n, num, course, score);//�����нṹָ�룬 ѧ�����������޸ĳɼ�ѧ����ѧ�ţ��޸Ŀγ̵����֣��Լ��޸ĺ�ĳɼ� 

  /*����޸ĺ��ѧ����Ϣ*/
  if(pos == -1)
  {
    printf("Not found!\n");  	
  }
  else
  {  
    printf("%d,%d,%d,%d\n", students[pos].num, students[pos].math, students[pos].english, students[pos].computer);
  }
  return 0;
}
int update_score(struct student *p, int n, int num, int course, int score)
{
	int i;
	int falg=-1;
	for(i=0;i<n;i++)
	{
		if(p[i].num==num)//������˴��� 
		{
			falg=i;
			switch(course)//��֧��� 
			{
				case 1:p[i].math=score;break; 
				case 2:p[i].english=score;break; 
				case 3:p[i].computer=score;break; 
			}
		}
	}
return falg;
}




