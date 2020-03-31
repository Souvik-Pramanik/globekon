#include<stdio.h>
int main()
{
	int s[10],a,b,sum=0;
	printf("Enter the size of the arary: ");
	scanf("%d",&a);
	printf("\nEnter %d numbers: ");
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	for(b=0;b<a;b++)
	sum=sum+s[b];
	printf("\nSummation is: %d\n",sum);
	//return sum;
}
