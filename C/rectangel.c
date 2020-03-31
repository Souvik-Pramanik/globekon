#include<stdio.h>
int main()
{
int choise,corner,area,total,a,n,b;

printf("\n1. Corner 	 2. Area 	3. Total Side\n");
corner=(a^2+b^2)^(1/2);
area=(a^2*b^2);
total=2*(a+b);
if(choise==1)
printf("\nCorner is :%d\n",corner);
else if(choise==2)
printf("\nArea is :%d\n",area);
else if(choise==3)
printf("\nTotal side is :%d\n",total);
else
printf("\nWRONG INPUT :!!!\n");
}
