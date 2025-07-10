#include<stdio.h>
#include<stdlib.h>
struct internal{
    int reg;
};
struct marks{
    int Sub_[5];
    int tot;
    float avg;
};
void internal_mark(struct internal *marks)
{
    printf("Enter the Register Number:");
    scanf("%d",&marks->reg);
}
void final(struct marks sub_mark[5])
{
   
    int i=0;
    while(i<5)
    {
        printf("Enter 3 internal marks of the subject %d:",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&sub_mark[i].Sub_[j]);
        }
        i++;
    }
    i=0;
     while(i<5)
    {
        sub_mark[i].tot=0;
        for(int j=0;j<3;j++)
        {
          sub_mark[i].tot+=sub_mark[i].Sub_[j];
        }
        sub_mark[i].avg=sub_mark[i].tot/3;
        i++;
    }
    for(int i=0;i<5;i++)
    {
        printf("Subject %d - Total:%d -Average:%f\n",i+1,sub_mark[i].tot,sub_mark[i].avg);
    }
}
int main()
{
    struct internal mark;
    internal_mark(&mark);
    struct marks subject[5];
    printf("Register No:%d\n",mark.reg);
    final(subject);
}
