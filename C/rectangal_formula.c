#include<Stdio.h>
int main()
{
int c,corner,area,total,a,b;
printf("\nEnter two sides of the rectangle\n");
scanf("%d%d",&a,&b);
printf("\n1. Corner	2. Area		3. Total Side\n");
if(c==1)
corner=(a^2+b^2)^(1/2);
printf("\nCorner is :%d\n",corner);
else if(c==2)
area=(a^2*b^2);
printf("\nArea is:%d\n",area);
else if(c==3)
total=2*(a+b);
printf("\nTotal side is :%d\n",total);
else
printf("\nWRONG INPUT :!\n");
}
