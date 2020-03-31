#include<stdio.h>
int main()
{
int n,arr[100],p,c,v,j,temp;
printf("\nEnter the size of the array:");
scanf("%d",&n);
printf("\nEnter %d elements",n);
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
printf("\nEnter the location where you want to add the element");
scanf("%d",&p);
printf("\nEnter the new Element");
scanf("%d",&v);
for(c<n-1;c>=p-1;c--)
arr[c+1]=arr[c];
arr[p-1]=v;
printf("\nResultant is :");
for(c=0;c<n+1;c++)
printf("\n%d",arr[c]);
return 0;
}
//int arr[100],n,c,j,temp;
//printf("\nHow much number u want for sorting\n");
//scanf("%d",&n);
//printf("\nEnter %d elements\n",n);
//for(c=0;c<n;c++)
//scanf("%d",&arr[c]);
//}
//printf("\nSorted list is :\n");
//for(c=0;c<n;c++)
//printf("%d\n",arr[c]);
//}
