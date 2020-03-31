#include<stdio.h>
int main()
{
int arr[50],n,i,j,p,t;
printf("\nEnter the size of the elements :\n");
scanf("%d",&n);
printf("\nEnter %d elments :\n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<(n-1);i++)
{
p=i;
for(j=i+1;j<n;j++)
{
if(arr[p]>arr[j])
p=j;
}
if(p!=i)
{
t=arr[i];
arr[i]=arr[p];
arr[p]=t;
}
}
printf("\nSorted element list is :\n");
for(i=0;i<n;i++)
printf("\n%d\n",arr[i]);
return 0;
}
