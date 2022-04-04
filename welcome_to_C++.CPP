LAB NO 3;


#include<stdio.h>
#include<conio.h>
void main(void)
{
clrscr();
printf("\a");
printf("WELCOME TO");
printf("\b");
printf("C++");
printf("\n");
printf("WELCOME");
printf("\r");
printf("TO");
printf("\t");
printf("C++");
printf("\aWELCOME TO\bC++\nWELCOME\rTO\tC++");
getche();
}
OUTPUT
WELCOME TO C++
WELCOME TO C++
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Q NO 2;WRITE A PROGRAMME WHICH CALCULATES THE ROOTS OF A QUADRTIC EQUATION...

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main (void)
{
float a,b,c,x1,x2,sq;
printf(" enter the value of a,b,c,:\n");
scanf("%f%f%f",&a,&b,&c);
sq= sqrt((b*b)-(4*a*c));
x1=(-b+sq)/2*a;
x2=(-b-sq)/2*a;
printf("x1=%f,x2=%f",x1,x2);
getche();
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Q NO 3 
DISPALY THE OUTPUT OF THE FOLLOWING PROGRAMME..


#include<stdio.h>
#include<conio.h>
void main()
{
int i=10,j=0;
clrscr(); j=2;
printf("(i*j++)+(i*j)=%d\n",(i*j++)+(i*j));
j=2;
printf("(i*j)+(i*j++)=%d\n",(i*j)+(i*j++));
j=2;
printf("(i*j++)+(i*j--)=%d\n",(i*j++)+(i*j--));
j=2;
printf("(i*j--)+(i*j++)=%d\n",(i*j--)+(i*j++));
j=2;
printf("(i*++j)+(i*j)=d\n",(i*++j)+(i*j));
j=2;
printf("(i*j)+(i*++j)=%d\n",(i*j)+(i*++j));
j=2;
printf("(i*++j)+(i*--j)=%d\n",(i*++j)+(i*--j));
j=2;
printf("(i*--j)+(i*++j)=%d\n",(i*--j)+(i*++j));
getche();
}

OUT PUT
printf("(i*j++)+(i*j)=50
printf("(i*j)+(i*j++)=40
printf("(i*j++)+(i*j--)=50
printf("(i*j--)+(i*j++)=30
printf("(i*++j)+(i*j)=60
printf("(i*j)+(i*++j)=50
printf("(i*++j)+(i*--j)=50
printf("(i*--j)+(i*++j)=30
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~