#include<stdio.h>
int binary_search(int[],int,int,int);
void main()
{
	int a[100],n,i,x,pos;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d numbers of elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a element to search: ");
	scanf("%d",&x);
	pos=binary_search(a,0,n-1,x);
	if(pos==-1)
	{
		printf("Unsuccessful Try !!!\n");
	}
	else
	{
		printf("Successfully find in %d position.\n",pos+1);
	}
}
int binary_search(int a[],int l,int u,int x)
{
	int mid;
	if(l>u)
		return-1;
	else
	{
		mid=(l+u)/2;
		if(a[mid]==x)
			return mid;
		else if(a[mid]>x)
			binary_search(a,l,mid-1,x);
		else
			binary_search(a,mid+1,u,x);
	}
}
