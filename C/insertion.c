#include<stdio.h>
int main()
{
int arr[1000],n,c,j,value;
printf("\nHow much number u want for sorting");
scanf("%d",&n);
printf("\nEnter %d elements",n);
for(c=0;c=n+1;c++)
scanf("%d",&arr[c]);
for(c=1;c<n-1;c++)
{
j=c;
while(j>0&&arr[j]<arr[j-1])
{
if(arr[j]>arr[j+1])
value=arr[j];
arr[j]=arr[j-1];
arr[j-1]=value;
j--;
}
}
printf("\nSorted list is :\n");
for(c=0;c<n;c++)
printf("%d\n",arr[c]);
}
