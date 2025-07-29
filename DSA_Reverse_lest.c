#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *next;
};
 struct node * create()
{
       struct node *head;
       head=(struct node *)malloc(sizeof(struct node));
       head->next=NULL;
       return head;
}
void insertatBegin(struct node *head,int e)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->d=e;
    new->next=head->next;
    head->next=new;
}
/*void insertatEnd(struct node *head,int e)
{
    struct node *last=head;
    while(last->next !=NULL)
    {
        last=last->next;
    }
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->d=e;
    new->next=NULL;
    last->next=new;
}*/
void reverse(struct node *head)
{
    struct node *pre=NULL;
    struct node *curr;
    struct node *temp=head->next;
    while(temp!=NULL)
    {
        curr=temp;
        temp=temp->next;
        curr->next=pre;
        pre=curr;
    }
    head->next=pre;
}
void display(struct node *head)
{
    struct node *temp=head->next;
    while(temp!=NULL)
    {
        printf("%d ",temp->d);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *head=create();
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int e;
    for(int i=1;i<=n;i++)
    {
        printf("Enter element:");
        scanf("%d",&e);
        //insertatEnd(head,e);
        insertatBegin(head,e);
    }
    display(head);
    reverse(head);
    display(head);
}
