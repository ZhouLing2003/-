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
struct Node* buildLinkedList(int* arr, int n)//����ָ������� 
{
	struct Node *head,*p1,*p2;
	head=NULL;
	p1=(struct Node *)malloc(sizeof(struct Node));//�������ٿռ���׵�ַ����p1;
	p2=p1;
	int i;
	for(i=0;i<n;i++)
	{   
		p1->data=arr[i];//�������
		if(head==NULL) //���ͷָ��Ϊ�յĻ��������ٿռ���׵�ַ��head     
			head=p1;
	    else
		    p2->next=p1;    	
		p1=(struct Node *)malloc(sizeof(struct Node));
	}
	p2->next=NULL;
	return head;
}
