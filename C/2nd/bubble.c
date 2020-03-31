#include<stdio.h>
int main()
{
int arr[100],n,c,j,temp;
printf("\nHow much number u want for sorting\n");
scanf("%d",&n);
printf("\nEnter %d elements\n",n);
for(c=0;c<n;c++)
scanf("%d",&arr[c]);
for(c=0;c<n-1;c++)
{
for(j=0;j<n-c-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\nSorted list is :\n");
for(c=0;c<n;c++)
printf("%d\n",arr[c]);
}
