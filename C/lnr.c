#include<stdio.h>
int linear(int[],int,int);
int main()
{
	int s[50],a,b,c,d;
	printf("Enter the size of the array : ");
	scanf("%d",&a);
	printf("\nEnter %d elements in the array :\n",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("Enter the elemet to search :");
	scanf("%d",&c);
	d=linear(s,a,c);
	if(d==-1)
	{
		printf("\n%d elemnet is not found in the array.\n",c);
	}
	else
	{
		printf("%d element is successfully found in position %d\n",c,d+1);
	}
	return 0; //e lauda.
}

int linear(int s[], int a, int c)
{
	int b;
	for(b=0;b<a;b++)
	{
		if(s[b]==c)
		return b;
	}
		return -1;
}
