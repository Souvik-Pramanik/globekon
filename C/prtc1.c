#include<stdio.h>
//int linier_search(int[],int,int,int);
int main()
{
	int s[50],a,b,c,d=0;
	printf("Enter array Size:");
	scanf("%d",&a);
	printf("\nEnter %d Elements:\n",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("\nEnter Search Element:");
	scanf("%d",&c);
	//linier_search(s[50],a,b,c);
	for(b=0;b<a;b++)
	{
		if(s[b]==c)
		{
			printf("\nElement %d is found at location %d\n",c,b+1);
			d++;
		}
	}
		if(d==0)
		{
			printf("\nSearch Element %d is not found. :( \n",c);
		}
		else
		{
			printf("\nElement %d is found %d time\n",c,d);
		}
	/*for(b=0;b<a;b++)
	{
		printf("Element %d ids found at location %d.",c,b+1);
	}*/
}

/*int linier_search(int s[50],int a,int b,int c)
{
	for(b=0;b<a;b++)
	{
		if(s[b]==c)
		{
			printf("\nElement %d ids found at location %d",c,b+1);
		}
		else
		{
			printf("\nElement not found. :( ");
		}
	}
}*/
