#include<stdio.h>
#include<stdlib.h>
struct record{
    char sub[30];
    int marks;
};
int main()
{
    struct record *report;
    int n;
    printf("Enter number of record:");
    scanf("%d",&n);
    report=(struct record *)malloc(n*sizeof(struct record));
    for(int i=0;i<n;i++)
    {
        printf("Enter the subject name and mark:");
        scanf("%s %d",report[i].sub,&report[i].marks);
    }
    printf("Subject Marks:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",report[i].sub,report[i].marks);
    }
}
