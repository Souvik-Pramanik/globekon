#include<stdio.h>
int main()
{
	int a,e,l,s[20];
	printf("\nEnter the size of the array :");
	scanf("%d",&a);
	printf("\nEnter %d elements :\n",a);
	for(e=0;e<a;e++)
		scanf("%d",&s[e]);
	printf("\nEnter the position from where u want to delete an element :");
	scanf("%d",&l);
	if(l>a)
		printf("\nDeletion is'n possible!\n   so, go to hell !!!\n");
	else
	{
		for(e=l-1;e<a-1;e++)
		{
			s[e]=s[e+1];
		}
	printf("\nResultant is :");
	for(e=0;e<a-1;e++)
		printf("\n%d\n",s[e]);
	}	
}
