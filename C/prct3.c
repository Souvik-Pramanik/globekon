#include<stdio.h>
int binary_search(int[],int,int,int);
void main()
{
	int s[50],a,b,c,d;
	printf("\nEnter array size:");
	scanf("%d",&a);
	printf("\nEnter %d elements:",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("\nEnter a element to search:");
	scanf("%d",&c);
	d=binary_search(s,0,a-1,c);
	if(d==-1)
	{
		printf("%d ELement isn't found.\n",c);
	}
	else
	{
		printf("%d Element is found at location %d\n",c,d+1);
	}
}

int binary_search(int s[],int first,int last,int c)
{
	int mid;
	if(first>last)
		return -1;
	else
	{
		mid=(first+last)/2;
		if(s[mid]==c)
			return mid;
		else if(s[mid]>c)
			binary_search(s,first,mid-1,c);
		else
			binary_search(s,mid+1,last,c);
	}
}
