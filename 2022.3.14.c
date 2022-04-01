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
  int i, n;//n表示有几个学生 
  struct student stu[MAXN];
  scanf("%d", &n);
  for(i = 0; i < n; i++)//分别存放其名字和成绩 
  {
    scanf("%s%d", stu[i].name, &stu[i].score);
  } 
  set_grade(stu, n);//调用函数 
  for(i = 0; i < n; i++)
    printf("%s %c\n", stu[i].name, stu[i].grade);

  return 0;
}

void set_grade(struct student *p, int n)//传入结构体的地址，以及有几个学生 
{    
    struct student *q = p + n - 1;//定义了一个指针指向结构体的最后一个 
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
	//std是一个结构体数组 
    struct student  std[N]={ {"111111",1984,2,15},{"222222",1983,9,21},{"333333",1984,9,1},{"444444",1983,7,15},{"555555",1984,9,28},{"666666",1983,11,15},{"777777",1983,6,22},{"888888",1984,8,19}}; 
    struct student  p; //p也是一个结构体        
    char  n[10]="666666";
    p=fun(std,n);//传入结构体以及所需要查找的编号 
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
struct student fun(struct student  *std, char  *num)//参数是指针 
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
void calc(struct student *p,int n)//求出总分 
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
void sort(struct student *p,int n)//对学生总分进行降序排序（最高的在前） 
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
struct student/*学生信息结构定义*/
{       
  int num;            /* 学号 */
  char name[10];      /* 姓名 */
  int math, english, computer;   /* 三门课程成绩 */
}; 
int update_score(struct student *p, int n, int num, int course, int score); /*函数声明*/

int main(void)
{    
  int i, pos, n, num, course, score;
  struct student students[50];   /* 定义结构数组 */
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    scanf("%d", &students[i].num);
    scanf("%s", students[i].name); 
    scanf("%d", &students[i].math); 
    scanf("%d", &students[i].english); 
    scanf("%d", &students[i].computer);
  }
  
  /* 输入待修改学生信息 */
  scanf("%d", &num);
  scanf("%d", &course);
  scanf("%d", &score);

  /*调用函数，修改学生成绩*/
  pos = update_score(students, n, num, course, score);//参数有结构指针， 学生个数，待修改成绩学生的学号，修改课程的名字，以及修改后的成绩 

  /*输出修改后的学生信息*/
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
		if(p[i].num==num)//有这个人存在 
		{
			falg=i;
			switch(course)//分支语句 
			{
				case 1:p[i].math=score;break; 
				case 2:p[i].english=score;break; 
				case 3:p[i].computer=score;break; 
			}
		}
	}
return falg;
}




