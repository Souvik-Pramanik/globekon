#include<stdio.h>
int main()
{
int arr[50],t,l,h,m,n,i;
printf("\nEnter the value of N");
scanf("%d",&n);
printf("\nEnter the array elements :");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nEnter the search items");
scanf("%d",&t);
l=0;
h=n-1;
while(l<=h)
{
m=(l+h)/2;
if(arr[m]==t)
printf("\nElement found :) ");
else if(arr[m]<t)
l=m+1;
else if(arr[m]>t)
l=m-1;
else
printf("\nElement not found :( ");
}
return 0;
}
