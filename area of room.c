// WAP to find the area of room in C.
#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter l: ");
    scanf("%d",&l);
    printf("Enter b: ");
    scanf("%d",&b);
    area = l*b;
    printf("Area = %d ft²\n",area);
    return 0;
}