#include<stdio.h>
int main()
{
	int s[100],a,e,l;
	printf("\nEnter the size of array :\n");
	scanf("%d",&a);
	printf("\nEnter %d element :\n",a);
	for(e=0;e<a;e++)
	{
		scanf("%d",&s[e]);
	}
	printf("\nEnter an Element to search :\n");
	scanf("%d",&l);
	for(e=0;e<a;e++)
	{
		if(s[e]==l)
		{ 
				printf("\nElement found in : %d\n & here %d is present.",e+1,l);
				break;
		}
	}
		if(e==a)
				printf("\nElement %d not found !!!\n",l);
				return 0;
}
