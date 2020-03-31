#include<stdio.h>
int main()
{
	int a,e,l,n;
	int s[20];
	printf("\nEnter the size of the array : ");
	scanf("%d",&a);
	printf("\nEnter %d number of elements :",a);
	for(e=0;e<a;e++)
		scanf("%d",&s[e]);
	printf("\nEnter the position where u want to add new element :");
	scanf("%d",&l);
	printf("\nEnter the new element :");
	scanf("%d",&n);
	for(e<a-1;e>=l-1;e--)
		s[e+1]=s[e];
		s[l-1]=n;
	printf("\nResultant is :");
	for(e=0;e<a+1;e++)
		printf("\n%d\n",s[e]);
	//printf("\nDeleted element is : %d\n",s[e]);
	return 0;
}
