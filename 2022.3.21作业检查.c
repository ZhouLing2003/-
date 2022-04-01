#include<stdio.h>
#include<malloc.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* buildLinkedList(int* arr, int n);
int main(int argc, char const *argv[]) 
{
    int *a, n, i;
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) 
	{
        scanf("%d", &a[i]);
    }
    struct Node* head = NULL;

    head = buildLinkedList(a, n);
    struct Node* p;
    for(p=head;p!=NULL;p=p->next)
    {
    	printf("%d ",p->data);
	}
}
struct Node* buildLinkedList(int* arr, int n)//传入指针和整数 
{
	struct Node *head,*p1,*p2;
	head=NULL;
	p1=(struct Node *)malloc(sizeof(struct Node));//把所开辟空间的首地址传给p1;
	p2=p1;
	int i;
	for(i=0;i<n;i++)
	{   
		p1->data=arr[i];//存放数据
		if(head==NULL) //如果头指针为空的话，将开辟空间的首地址给head     
			head=p1;
	    else
		    p2->next=p1;    	
		p1=(struct Node *)malloc(sizeof(struct Node));
	}
	p2->next=NULL;
	return head;
}
