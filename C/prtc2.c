#include<stdio.h>
int main()
{
	int s[50],a,b,c,mid,first,last;
	printf("\nEnter array size:");
	scanf("%d",&a);
	printf("\nEnter %d elements:",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("\nEnter a element to search:");
	scanf("%d",&c);
	first=0;
	last=a-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(s[mid]<c)
		mid=mid+1;
		else if(s[mid]>c)
		{
			mid=mid-1;
		}
		else if(s[mid]==c)
		{
			printf("%d Element is found at location %d\n",c,mid+1);
			return mid;
		}
	}
	if(last<=first)
		{
			printf("%d ELement isn't found.\n");	
		}
	return 0;
}
