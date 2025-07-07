#include<stdio.h>
struct Circle
{
    int radius;
    float pi;
    float area;
    float perimeter;
};
float area(struct Circle *are)
{
    printf("Enter Radius:");
    scanf("%d",&are->radius);
    printf("Enter pi value:");
    scanf("%f",&are->pi);
    float area_Cir;
    area_Cir=are->pi*are->radius*are->radius;
    printf("Area in function:%f\n",area_Cir);
    return area_Cir;
}
float perimeter(struct Circle *peri)
{
    float perimeter;
    perimeter=peri->radius*2*peri->pi;
    printf("In fun Perimeter:%f\n",perimeter);
    return perimeter;
}
int main()
{
    struct Circle cir;
    float area_circle;
    area_circle=area(&cir);
    printf("Before Cal:%f\n",area_circle);
    cir.area=cir.pi*cir.radius*cir.radius;
    printf("After Calculate:%f\n",cir.area);
    float peri_circle;
    peri_circle=perimeter(&cir);
    printf("Before Calculate:%f\n",peri_circle);
    cir.perimeter=2*cir.pi*cir.radius;
    printf("After Calculate:%f",cir.perimeter);
}
