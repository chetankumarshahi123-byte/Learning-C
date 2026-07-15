//WAP to find the average of three numbers.
#include<stdio.h>
int main()
{
int a,b,c;
float avg;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);
avg = (a+b+c)/3;
printf("Average of three numbers is %.3f",avg);
return 0;
}