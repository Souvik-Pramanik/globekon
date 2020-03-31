#include<stdio.h>
int insertion_sort(int[],int,int);
void main()
{
	int s[100],a,b,c,d;
	printf("\nHow many numbers do u want for sorting?\n");
	scanf("%d",&a);
	printf("\nEnter %d elements\n",a);
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	printf("\nSorted list is :\n");
	insertion_sort(s,a,c);
	for (b=0;b<a;b++)
    printf("%d\n",s[b]);
}
int insertion_sort(int s[50],int a,int c)
{
	for(int b=1;b<a;b++)
	{
		int d=s[b];
		for(c=b-1;c>=0;c--)
		{
			if(d<s[c])
			{
				s[c+1]=s[c];
			}
			else
				break;
		}
		s[c+1]=d;
	}
}
