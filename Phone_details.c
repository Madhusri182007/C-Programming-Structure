#include<stdio.h>
     struct Phone {
        int emino;
        char name[30];
        char color[30];
        int modelno;
        };
int main()
{
    struct Phone ph;
    printf("Enter Emino:");
    scanf("%d",&ph.emino);
    printf("Enter phone name:");
    scanf("%s",ph.name);
    printf("Enter phone color:");
    scanf("%s",ph.color);
    printf("Enter Model no:");
    scanf("%d",&ph.modelno);
    printf("The details are:\n");
    printf("The Emino:%d\n",ph.emino);
    printf("The phone name:%s\n",ph.name);
    printf("The color of the phone:%s",ph.color);
    printf("Model no:%d\n",ph.modelno);
}
