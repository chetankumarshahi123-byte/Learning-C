// Volume of the cuboid(rectangular box).
#include<stdio.h>
int main()
{
    int l,b,h, volume;
    printf("Enter l: ");
    scanf("%d",&l);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter h: ");
    scanf("%d",&h);
    volume = (l*b*h);
    printf("Volume = %d inch³", volume);
    return 0;
}