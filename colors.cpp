#include <stdio.h>
void main()
{
char c1,c2,c3;
int v1=0,v2=0,v3=0;
printf("Type three colors:\na=black\nb=brown\nc=red\nd=orange\ne=yellow\nf=green\ng=blue\nh=violet\ni=gray\nj=white\n");
scanf("%c %c %c",&c1,&c2,&c3);

switch(c1)
{case 'a':
v1=0;
break;
case 'b':
v1=1;
break;
case 'c':
v1=2;
break;
case 'd':
v1=3;
break;
case 'e':
v1=4;
break;
case 'f':
v1=5;
break;
case 'g':
v1=6;
break;
case 'h':
v1=7;
break;
case 'i':
v1=8;
break;
case 'j':
v1=9;
break;
default:
v1=0;
break;}

switch(c2)
{case 'a':
v2=0;
break;
case 'b':
v2=1;
break;
case 'c':
v2=2;
break;
case 'd':
v2=3;
break;
case 'e':
v2=4;
break;
case 'f':
v2=5;
break;
case 'g':
v2=6;
break;
case 'h':
v2=7;
break;
case 'i':
v2=8;
break;
case 'j':
v2=9;
break;
default:
v2=0;
break;}

switch(c3)
{case 'a':
v3=1;
break;
case 'b':
v3=10;
break;
case 'c':
v3=100;
break;
case 'd':
v3=1000;
break;
case 'e':
v3=10000;
break;
case 'f':
v3=100000;
break;
case 'g':
v3=1000000;
break;
case 'h':
v3=10000000;
break;
case 'i':
v3=1;
break;
case 'j':
v3=1;
break;
default:
v3=0;
break;}
printf("%d%dx%d ohms",v1,v2,v3);
}
