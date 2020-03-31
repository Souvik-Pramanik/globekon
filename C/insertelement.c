#include<stdio.h>
int main()
{
	int arr[50],n,p,c,v;
	printf("Enter the size of the array :\n");
	scanf("%d",&n);
	printf("Enter %d elements : \n",n);
	for(c=0;c<n;c++)
		scanf("%d",&arr[c]);
	printf("Enter the location where u want to enter the new element : \n");
	scanf("%d",&p);
	printf("Enter the new element : \n");
	scanf("%d",&v);
	for(c<n-1;c>=p-1;c--)
		arr[c+1]=arr[c];
		arr[p-1]=v;
	printf("Resultant is : \n");
	for(c=0;c<n+1;c++)
	printf("\n%d",arr[c]);
	return 0;
}
