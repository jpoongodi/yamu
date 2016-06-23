#include <stdio.h>
#include <string.h>
struct node
{
    struct node * next;
    int data;
};
void insert(struct node ** head,int x)
{
   int count=0;
    struct node *newn;
    newn=(struct node*)malloc(sizeof(struct node));
    newn->data=x;
    newn->next=NULL;
   
    if(*head==NULL)
    {
            *head=newn;
            count++;
    }
    else
    {
        struct node *temp;
        temp = *head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        
       temp->next=newn;
        
        
    }
   
         
}
void rev(struct node *head)
{
    if(head==NULL)
       return;
    
    rev(head->next);
    printf("%d ",head->data);
}
    
int main()
{
  
   struct node *head=NULL;
   int i,n,a[10];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       insert(&head,a[i]);
       
   }
  rev(head);
    return 0;
}
