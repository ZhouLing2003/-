/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;//ѧ�� 
     char   name[20];//���� 
     int    score;//�ɼ� 
     struct stud_node *next;//ָ���� 
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;
    
    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}
void input()
{
    struct stud_node *pt;
    pt=(struct stud_node *)malloc(sizeof(struct stud_node));
    tail=pt;
    scanf("%d %s %d",&pt->num,&pt->name,&pt->score);
    while(pt->num>0)
    {
    	if(head==NULL)
    	{
    		head=pt;
		}
		else
		{
			tail->next=pt;
		}
		tail=pt;
		pt=(struct stud_node *)malloc(sizeof(struct stud_node));
        scanf("%d %s %d",&pt->num,&pt->name,&pt->score);
	}
    tail->next=NULL;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ListNode
{
    char code[8];
    struct ListNode *next;
};

struct ListNode *createlist();
int countcs( struct ListNode *head );

int main()
{
    struct ListNode  *head;
    head = createlist();
    printf("%d\n", countcs(head));
    return 0;
}
int countcs( struct ListNode *head )//����head���û������ѧ��ѧ�������ͷָ�룻����countcsͳ�Ʋ�����head������רҵΪ�������ѧ������
{
	struct ListNode *p=head;
    int count=0;
    while(p!=NULL)
    {
    	if(p->code[1]=='0'&&p->code[2]=='2')
    	count++�� 
		p=p->next;
	}
	return count;
}
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

/* �������������ص������ͷָ�� */
struct Node* buildLinkedList(int* arr, int n);

/* ������ֵ���Ľ�� */
struct Node* getMax(struct Node* head);

int main(int argc, char const *argv[]) 
{
    int *a, n, i;
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    struct Node* head = NULL;

    head = buildLinkedList(a, n);

    struct Node* pMax = getMax(head);
    if (pMax)
        printf("%d\n", pMax->data);
    else
        printf("-1\n");

    free(a);

    return 0;
}
struct Node* buildLinkedList(int* arr, int n)//data
{
	
}
struct Node* getMax(struct Node* head)
{
	
}
















