#include<stdio.h>
int main()
{
int a[100],n,s,c,count=0;
printf("\nEnter the size of the array :");
scanf("%d",&n);
printf("\nEnter %d elements :",n);
for(c=0;c<n;c++)
scanf("%d",&a[c]);
printf("\nElement a number to search");
scanf("%d",&s);
for(c=0;c<n;c++)
{
if(a[c]==s)
{
printf("\nElement found in :%d",c+1);
count++;
}
}
if(count==0)
printf("\nElement %d not found",s);
else
printf("\n%d is not present %d times in the array",s,count);
}
