#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node * next;
};
void insert(struct node **head,int x)
{
struct node * nw=(struct node *)malloc(sizeof(struct node));
nw->data=x;
nw->next=*head;
*head=nw;

return;
}
void mid(struct node ** head)
{
struct node * fast,* slow;
slow=*head;
fast=*head;
while(fast->next!=NULL)
{
	fast=fast->next->next;
	slow=slow->next;
}
	printf("%d",slow->data);
return;
}
void main()
{
struct node * head=NULL;
int a,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		insert(&head,a);
	}

mid(&head);
getch();
return;
}
