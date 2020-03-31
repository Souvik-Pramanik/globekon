#include<stdio.h>
#include<stdlib.h>

//void  linear_search(int[],int,int);
//int  binary_search(int[],int,int,int);
//int  binary_recursive_search(int[],int,int,int);

int binary_search(int a[50],int l,int u,int x)
{
	int mid;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid]>x)
		{
			u=mid-1;
		}
		else
		{
			l=mid+1;
		}
		
	}
	return -1;
}
int binary_recursive_search(int a[50],int l,int u,int x)
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
			binary_recursive_search(a,l,mid-1,x);
		else
			binary_recursive_search(a,mid+1,u,x);
	}
}
void linear_search(int a[50],int n,int search)
{
	int c;
	for (c = 0; c < n; c++)
	{
		if (a[c] == search)    
		{
			printf("%d is present at location %d.\n", search, c+1);
			break;
		}
	}
  if (c == n)
    printf("%d isn't present in the array.\n", search);
}

void main()
{
	int a[100],n,i,j,x,pos,c,k;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d numbers of elements: \n",n);
	for(i=0;i<n;i++)
	{
		printf("\n%d. Element of a[%d] is: ",i+1,i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter a element to search: ");
	scanf("%d",&x);
	while(1)
	{
		printf("\n\t===>>>ENTER YOUR CHOISE<<<===\n");
	printf("1.If You Want To Go Ahead\n2.EXIT\n");
	scanf("%d",&j);
	switch(j)
	{
		case 1: 
		{
			while(1)
	{
	printf("\n\t1.Linear Search\n\t2.Binary Iterative Search\n\t3.Binary Recursive Search\n\t4.EXIT\n");
	printf("\nEnter your Choise:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:linear_search(a,n,x);
			break;
		case 2:pos=binary_search(a,0,n-1,x);
		
			if(pos==-1)
	{
		printf("Unsuccessful Try !!!\n");
	}
	else
	{
		printf("Successfully find in %d position.\n",pos+1);
	}
		
			break;
		case 3:pos=binary_recursive_search(a,0,n-1, x);
		{
			if(pos==-1)
	{
		printf("Unsuccessful Try !!!\n");
	}
	else
	{
		printf("Successfully find in %d position.\n",pos+1);
	}
		}
			break;
		case 4:exit(0);
	}
	}
		}
			break;
		case 2:exit(0);
	}
	}
	
}
