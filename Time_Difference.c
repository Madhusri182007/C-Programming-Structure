#include<stdio.h>
struct cake{
    int hrs;
    int min;
    int sec;
};
int main()
{
    struct cake t1,t2,diff;
    printf("Enter the starting time in HRS:MIN:SEC:");
    scanf("%d %d %d",&t1.hrs,&t1.min,&t1.sec);
    printf("Enter the Ending time in HRS:MIN:SEC:");
    scanf("%d %d %d",&t2.hrs,&t2.min,&t2.sec);
    int diff_1=(t1.hrs*3600+t1.min*60+t1.sec);
    int diff_2=(t2.hrs*3600+t2.min*60+t2.sec);
    diff.sec=diff_1-diff_2;
    if(diff.sec<0)
    {
        diff.sec=diff_2-diff_1;
    }
    diff.hrs=diff.sec/3600;
    diff.sec=diff.sec%3600;
    diff.min=diff.sec/60;
    diff.sec=diff.sec%60;
    printf("Time difference:%d:%d:%d",diff.hrs,diff.min,diff.sec);

}
