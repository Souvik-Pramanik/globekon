#include<stdio.h>
int main()
{
	int ar[10],a,b,c,d;
	printf("\nEnter th esize of the array :\n");
	scanf("%d",&a);
	printf("\nEnter %d elements :\n",a);
	for(b=0;b<a;b++)
	scanf("%d",&ar[b]);
	printf("Enter the locatiom where u want to delete the element :");
	scanf("%d",&c);
	if(c>a)
	printf("\nDelete is not possible.....Programme terminated !!!\n");
	else
	{
		for(b=c-1;b<=a-1;b++)
			ar[b]=ar[b+1];
	printf("\nResultant array is :\n");
	for(b=0;b<a-1;b++)
	printf("\n%d",ar[b]);
	}
}

