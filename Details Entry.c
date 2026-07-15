// Details of 10 students(name, address, phonenumber,and age).

#include<stdio.h>
struct student {
char name[34],address[99], phonenumber[15];
int age;
};
int main()
{
struct student s[10];
int i;
for(i=0;i<10;i++)
{
printf("\nStudent %d\n",i+1);
printf("Enter name: ");
fgets(s[i].name,sizeof(s[i].name),stdin);
printf("Enter address: ");
fgets(s[i]. address,sizeof(s[i]. address),stdin);
printf("Enter phonenumber: ");
fgets(s[i]. phonenumber,sizeof(s[i]. phonenumber),stdin);
printf("Enter age: ");
scanf("%d",&s[i].age);
getchar();
};
for(i=0;i<10;i++)
{
printf("\nStudent %d\n",i+1);
printf("Name of a student: s[i].name\n",s[i].name);
printf("Address of a student: s[i]. address",s[i]. address);
printf("Phone number of a student: s[i]. phonenumber",s[i]. phonenumber);
printf("Age of a student: %d",s[i].age);
printf("\n");
};
return 0;
}