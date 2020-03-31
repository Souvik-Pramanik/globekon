#include<stdio.h>
int main()
{
	int a,b[50][50],c[50][50],d,e;
	printf("Enter the size of the matrix:");
	scanf("%d",&a);
	for(d=1;d<=a;d++)
	{
		for(e=1;e<=a;a++)
		{
				printf("\nEnter Matrix's Row & Coloumn [%d][%d]:",d,e);
				scanf("%d",&b[d][e]);
				b[d][e]=e;
		}
	}
	for(d=1;d<=a;d++)
	{
		for(e=1;e<=a;a++)
		{
			printf("%d",b[d][e]);
		}
	}
}	
