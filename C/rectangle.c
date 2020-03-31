#include<stdio.h>
#include<math.h>
int main()
{
int c,area,sqrt,total;
float a,b,corner;
printf("\nEnter two sides of the rectangle\n");
scanf("%f%f",&a,&b);
corner=sqrt(a+b);
area=(a*b);
total=2*(a+b);
printf("\n1. Corner	2. Area		3. Total Side\n");
scanf("%d",&c);
if(c==1)
printf("\nCorner is :%d\n",corner);
else if(c==2)
printf("\nArea is:%d\n",area);
else if(c==3)
printf("\nTotal side is:%d\n",total);
else
printf("\nWRONG INPUT :!!!\n");
}
