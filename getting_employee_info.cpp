#include <stdio.h>
#include <conio.h>
#include <string.h>
void biodata1(char [], char [], int, float);
void main()
{
struct bd
{
char name[];
char address[];
int age;
float salary;
};
struct bd n1,ad1,ag1,sa1;
clrscr();
printf("\nEnter name of 1st employee: ");
gets(n1.name);
printf("\nEnter address of 1st employee: ");
gets(ad1.address);
printf("\nType age of 1st employee: ");
scanf("%d",&ag1.age);
printf("\nType salary of 1st emplyee: ");
scanf("%f",&sa1.salary);
clrscr();
biodata1(n1.name,ad1.address,ag1.age,sa1.salary);
getch();
}
void biodata1(char name[],char address[],int age,float salary)
{
printf("1st Employee Information:-\n");
printf("Name: %s\nAddress: %s\nAge: %d\nSalary: %f",name,address,age,salary);
}