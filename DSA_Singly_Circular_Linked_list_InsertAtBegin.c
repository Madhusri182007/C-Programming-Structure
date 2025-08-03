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
    head->next=head;
    return head;
}
struct node *tail=NULL;
void insertAtBegin(struct node *head,int e)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->d=e;
    newnode->next=head->next;
    head->next=newnode;
    if(tail==NULL)
    {
        tail=newnode;
    }
}
void display(struct node *head)
{
    struct node *temp=head->next;
    while(temp!=head)
    {
        printf("%d ",temp->d);
        temp=temp->next;
    }
}
int main()
{
    struct node *head= create();
    for(int i=1;i<=5;i++)
    {
        insertAtBegin(head,i);
    }
    display(head);
    printf("Tail:%d",tail->d);
}
