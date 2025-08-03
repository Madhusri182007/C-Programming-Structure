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
void insertAtPos(struct node *head,int pos,int e)
{
    struct node *temp=head;
    int i=0;
    while(i<(pos-1) && temp!=tail)
    {
        temp=temp->next;
        i++;
    }
    if(temp==tail)
    {
        printf("Position exceeds");
    }
    else{
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->d=e;
        newnode->next=temp->next;
        temp->next=newnode;
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
    printf("\n");
}
int main()
{
    struct node *head= create();
    
    for(int i=1;i<=5;i++)
    {
        tail=insertAtEnd(head,tail,i);
    }
    insertAtPos(head,3,6);
    insertAtPos(head,6,7);
    insertAtPos(head,7,8);
    display(head);
    insertAtPos(head,10,9);
    display(head);
}
