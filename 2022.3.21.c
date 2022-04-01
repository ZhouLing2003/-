/*
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* buildLinkedList(int* arr, int n);
struct Node* getMax(struct Node* head);

int main(int argc, char const *argv[]) 
{
    int *a, n, i;
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));//把创建好的内存空间地址传给a 
    for (i = 0; i < n; ++i) 
	{
        scanf("%d", &a[i]);//把这些数据传入首地址为a的内存空间中 
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
struct Node* buildLinkedList(int* arr, int n)//传入指针和整数 
{
	struct Node *head=NULL,*p1,*p2=NULL;
	int i;
	for(i=0;i<n;i++)
	{ 
	    p1=(struct Node *)malloc(sizeof(struct Node));
		p1->data=arr[i];//存放数据
		p1->next=NULL;
		if(head==NULL) //如果头指针为空的话，将开辟空间的首地址给head     
			head=p1;
	    else
		    p2->next=p1;  
		p2=p1;	  	
	}
	return head;
}

struct Node* getMax(struct Node* head)
{
	int max;
    struct Node*p1,*p2=NULL;
	for(p1=head;p1!=NULL;p1=p1->next)
	{
        if(p1==head)
        {
        	p2=p1;
		}	 
		else 
		{
			if(p1->data>p2->data)
			{
				p2=p1;			
			}
		}
	}
	return p2;
}
*/
#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int data;
    struct ListNode *next;
};
struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}
struct ListNode *readlist()
{
	struct ListNode *head=NULL,*p1,*p2=NULL;
	p1=(struct ListNode *)malloc(sizeof(struct ListNode));
	p2=p1;
    scanf("%d",&p1->data);
    while(p1->data!=-1)
    {
    	if(head==NULL)
    	{
    		head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct ListNode *)malloc(sizeof(struct ListNode));
		scanf("%d",&p1->data);
	}
	p2->next=NULL;
	return head;
}
/*
struct ListNode *getodd( struct ListNode **L )//传入的是L的地址，L为指针,是创建好的链表的头指针 
{
	int i=1;
	struct ListNode *head=**L,*p1,*p2=NULL;
	p1=**L;
	for(i=1;i%2!=0,p1!=NULL;i++,p1=p1->next)
	{
		p1=(struct ListNode *)malloc(struct ListNode);
		p1=**L->data;
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return head;
}
*/
struct ListNode *getodd( struct ListNode **L ){
	struct ListNode *head=NULL,*temp=*L,*p1=NULL,*p2=NULL;
	while(temp){
		if(temp->data%2){
			if(p2)
				p2->next=temp;
			else
				head=temp;
				
			if(p1){
				p1->next=temp->next;
				temp->next=NULL;
				p2=temp;
				temp=p1->next;
			}
			else{
				p2=temp;
				temp=temp->next;
				*L=temp;
				p2->next=NULL;
			}
			continue;
		}
		p1=temp;
		temp=temp->next;
	}
	return head;
}

