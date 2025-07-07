#include<stdio.h>
struct student{
    char name[30];
    int Std;
    int Age;
    int M1,M2,M3,M4,M5;
    int Total;
    float Average;
};
int main()
{
    struct student stu[2];
    for(int i=0;i<2;i++)
    {
    printf("Enter student%d Name",i+1);
    scanf("%s",stu[i].name);
    printf("Enter the standard of studying:");
    scanf("%d",&stu[i].Std);
    printf("Enter the Age of the Student%d:",i+1);
    scanf("%d",&stu[i].Age);
    printf("Enter MArk1:");
    scanf("%d",&stu[i].M1);
     printf("Enter MArk2:");
    scanf("%d",&stu[i].M2);
     printf("Enter MArk3:");
    scanf("%d",&stu[i].M3);
     printf("Enter MArk4:");
    scanf("%d",&stu[i].M4);
     printf("Enter MArk5:");
    scanf("%d",&stu[i].M5);
    stu[i].Total=stu[i].M1+stu[i].M2+stu[i].M3+stu[i].M4+stu[i].M5;
    stu[i].Average=stu[i].Total/5;
    }
    for(int i=0;i<2;i++)
    {
    printf("Name:%s\n",stu[i].name);
    printf("Std:%d\n",stu[i].Std);
    printf("Age:%d\n",stu[i].Age);
    printf("Total:%d\n",stu[i].Total);
    printf("Average:%f\n",stu[i].Average);
    }
    
}
