#include<stdio.h>
int main()
{
	int arr[10],a,b,c,d;
	printf("Enter the size of the array :\n");
	scanf("%d",&a);
	printf("Enter %d elements :\n",a);
	for(b=0;b<a;b++)
	scanf("%d",&arr[b]);
	printf("Enter the location where u want to insert the elelment :\n");
	scanf("%d",&c);
	printf("Enter the new element :\n");
	scanf("%d",&d);
	for(b=a-1;b>=c-1;b--)
	arr[b+1]=arr[b];
	arr[c-1]=d;
	printf("Resultant array is :\n");
	for(b=0;b<a+1;b++)
	printf("\n%d",arr[b]);
}
