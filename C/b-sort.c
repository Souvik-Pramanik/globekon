#include<stdio.h>
int b_sort(int[],int,int,int,int);
int main()
{
	int s[50],a,b,c,d;
	printf("How many elements you wanted for Bubble Sort :");
	scanf("%d",&a);
	printf("\nEnter %d elements in the array :\n",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	b_sort(s,b,c,a,d);
	printf("Sorted List is :\n");
	for(c=0;c<a;c++)
		printf("%d\n",s[c]);
}

int b_sort(int s[],int b,int c,int a,int d)
{
	//int a,d;
	for(b=0;b<a-1;b++)
	{
		for(c=0;c<a-b-1;c++)
		{
			if(s[c]>s[c+1])
			{
				d=s[c];
				s[c]=s[c+1];
				s[c+1]=d;
			}
		}
	}
}
