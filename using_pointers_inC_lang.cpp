#include <stdio.h>
#include <conio.h>
void main()
{
int temp[7];
int *ptr;
//int avg=0;
ptr=temp;
for(int x=0;x<=6;x++)
{
printf("Enter temprature of day %d: ",x);
scanf("%d",(ptr+x));
}
ptr=temp;
for(x=1;x<7;x++)
*ptr+=*(ptr+x);
printf("Average temprature is %d.",*ptr/7);
//getch();
//printf("%d%d",*ptr,temp[1]);
getch();}
