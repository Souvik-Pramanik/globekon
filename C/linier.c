#include<stdio.h>
int main()
{
int arr[100],h,i,j;
printf("\nEnter the size of the array\n");
scanf("%d",&h);
printf("\nEnter %d elements",h);
for(i=0;i<h;i++)
scanf("%d",&arr[i]);
printf("\nEnter an element for search\n");
scanf("%d",&j);
for(i=0;i<h;i++);
{
if(j==arr[i])
{
printf("\nElement found in =%d\n",i);
}
else
printf("\nElement not found\n");
}
}
