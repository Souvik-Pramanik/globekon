#include<stdio.h>
int main()
{
	int a[50],b[50],c,d,e;
	/*printf("Enter the size for this Alice-Boobs game : ");
	scanf("%d",&c);*/
	printf("\nEnter the three values for the Alice :\n");
	for(d=0;d<3;d++)
	scanf("%d",&a[d]);
	printf("\nEnter the three values for the Boobs :\n");
	for(e=0;e<3;e++)
	scanf("%d",&a[e]);
	for(d=0;d<3;d++)
	{
			if(a[d[0]]>a[e[0]])
				printf("\nAlice got 1 & Boobs got 0");
			else if(a[d[f]]==a[e[f]])
				printf("\nTHE GAME IS TIE !!!");
			else if(a[d]<a[e])
				printf("\nBoobs got 1 & Alice got 0");
			else
			return 0;
	}
	
	for(e=0;e<3;e++)
	{
			if(a[d]>a[e])
				printf("\nAlice got 1 & Boobs got 0");
			else if(a[d]==a[e])
				printf("\nTHE GAME IS TIE !!!");
			else if(a[d]<a[e])
				printf("\nBoobs got 1 & Alice got 0");
			else
			return 0;
	}
}
