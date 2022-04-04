lab # 5

Q NO 2 WRITE A MARKSHEET PRIGRAMME THAT ACCEPTS THE MARKS OF DDIFFERENT
SUBJECTS FROM USER CALCULATES TOTAL MARKS,TELLS GRADES .MAKE NESTED IF ELSE CONSTRUCT.



#include<stdio.h>
#include<conio.h>
void main(void)
{
int s1,s2,s3,s4,s5,t;
float perc;
printf(" enter marks of five sbujects");
scanf("%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5);
t=s1+s2+s3+s4+s5;
perc=(t*100)/500;
if(perc<60 &&( perc>=50))
printf(" c garde");
{
else if(perc<70 && (perc>=60))
printf(" B grade");
{
else if(perc<80 && (perc>=70))
printf(" A grade");
else if(perc>=80)
printf(" A1 grade");
else
printf(" fail");
getche();
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 Q NO 1 USE THE TERNARY OPERATOR TO FIND OUT THE SMALLER AND LARGER
OF THE DATA MEMBERS AND IF ELSE STATEMENT TO FIND OUT WETTHER THE ENTERD
NUMBER IS EVEN OR ODD..


#include<stdio.h>
#include<conio.h>
void main()
{
int a=7,b=12,small;
small=(a<b)?a:b;
printf("%d\n",small);
if(small%2)
printf("number is odd\n");
elsee;'
printf("number is even");
getche();
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Q NO 3
WRITE A PROGRAMME THAT SLETCTS THE NAME OF FIG AND GIVES THE FORMULA TO CALCULATE THE AREA
USE TRIANGLE,RECTANGLE,AND PARELLEOGRAMM AS THE FIG CHOICE?MAKE USE OF SWITCH
#include<stdio.h>
#include<conio.h>
void main()
{
char op;
printf("enter t for triangle\t r for recrtangle\t p for parellegram")
scanf("%c",op);
switch(op)
{
case't':
printf("A=b*h/2:");
break;
case'r':
printf("A=b*h:");
break;
case'p':
printf("A=b*h:");
break;
default:
printf("does not make sense");
getche
();
}
}

Q NO 4; WRITE A PROGRAMME THAT CALCULATES the capacitance & inductance;
capacitance=
inductance=

#include <stdio.h>
#include <conio.h>
void main()
{
char x;
printf("Type c to calculate capacitance or type l to calculate inductance");
scanf("%c",&x);
switch(x)
{
case 'c':
int f,c;
printf("Enter value of F & C: ");
scanf("%d%d",&f,&c);
printf("%d is capacitance.",1/(2*3.14*f*c));
break;
case 'l':
int f,l;
printf("Enter value of F & L: ");
scanf("%d%d",&f,&l);
printf("%d is capacitance.",2*3.14*f*l);

break;
}

Write a program that determines whether the year entered by the user is a leap year or not.
#include <iostream.h>
void main()
{
int x;
cout<<"Type any year";
cin>>x;
if(x%4==0)
cout<<"Entered year is leap";
else
cout<<"Entered year is not leap.";
}

