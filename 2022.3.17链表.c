/*#include<stdio.h>
#include<malloc.h>
#include<string.h>
//������� 
//������̬����
//��ӡ��̬���� 
struct STU//�������� 
{
	int num;
	int score;
	struct STU *next;
};
void print(struct STU *head);//��ӡ�������� 
struct STU *creat();//������������ 

int main()//������ 
{
	struct STU *head;
	head=creat();
	print(head);
	return 0;
}

void print(struct STU *head)//��ӡ�����е����� 
{
for(;head!=NULL;head=head->next)
   printf("%d %d\n",head->num,head->score);
}

struct STU *creat()
{
	struct STU *head,*p1,*p2;
	head=NULL;
	p1=(struct STU *)malloc(sizeof(struct STU)); 
	p2=p1;
	scanf("%d %d",&p1->num,&p1->score);
	while(p1->num>0)
	{
		if(head==NULL)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct STU *)malloc(sizeof(struct STU));
		scanf("%d %d",&p1->num,&p1->score);
	}
	p2->next=NULL;
	return head;
}
#include<stdio.h>
struct STU
{
	int num;
	int score;
	struct STU *next;
};
void print(struct STU *head);
int main()
{
	struct STU *head,A,B,C;
    scanf("%d %d",&A.num,&A.score);
    scanf("%d %d",&B.num,&B.score);
    scanf("%d %d",&C.num,&C.score);
    head=&A;
    A.next=&B;
    B.next=&C;
    C.next=NULL;
    print(head);
}
void print(struct STU *head)
{
	for(;head!=NULL;head=head->next)
	{
		printf("%d %d\n",head->num,head->score);
	}
}*/
#include<stdio.h>
struct STU
{
	char a[100];
	int num1;
	int num2;
};
int main()
{
	struct STU student[1005];
	int n;//�������������㴴���ṹ�� 
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++) //��ſ�����Ϣ 
	{
		scanf("%s %d %d",&student[i].a,&student[i].num1,&student[i].num2);
	}
	int n1;//�����ѧ������
	int b[1000];//�Ѵ�����Ϣ�����м����� 
	scanf("%d",&n1);
	int j; 
	for(i=0;i<n1;i++)
	{
		scanf("%d",&b[i]);
	}
	for(j=0;j<n1;j++)
	{
		for(i=0;i<n;i++) 
	    {  
		    if(student[i].num1==b[j])
		    {
			    printf("%s %d\n",student[i].a,student[i].num2);
		    }
	    }
	}
	return 0;
}

















