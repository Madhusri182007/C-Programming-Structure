#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *next;
};
struct node *tail=NULL;
struct node * create()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=head;
    tail=head;
    return head;
}
struct node * insertAtEnd(struct node *head,struct node *tail,int e)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->d=e;
    newnode->next=head;
    tail->next=newnode;
    tail=newnode;
    return tail;
    
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
        tail=insertAtEnd(head,tail,i);
    }
    display(head);
}
