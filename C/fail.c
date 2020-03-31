#include<stdio.h>
int main()
{
	int s[10],l,e,a;
	printf("\nEnter size of the array:\n");
	scanf("%d",&a);
	printf("Enter %d elements :\n",a);
	for(e=0;e<a;e++)
	{
		scanf("%d",&s[e]);
	}
	printf("Enter a number to search :\n");
	scanf("%d",&l);
	for(e=0;e<a;e++)
	{
		if(s[e]==l)
		{
			printf("%d is present in location %d\n",l,e+1);
			break;
		}
	}
	if(e==a)
		printf("%d isn't present in array.",l);
	return 0;
}
