#include<stdio.h>
int insertion_sort(int[],int);
void main()
{
	int s[100],a,b;
	printf("\nHow many numbers do u want for sorting?\n");
	scanf("%d",&a);
	printf("\nEnter %d elements\n",a);
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	printf("\nSorted list is :\n");
	insertion_sort(s,a);
	for (b=0;b<=a-1;b++)
    printf("%d\n",s[b]);
}
int insertion_sort(int s[50],int a)
{
	for(int b=1;b<=a-1;b++)
	{
		int c=b;
		while(c>0 && s[c-1]>s[c])
		{
			int d=s[c];
			s[c]=s[c-1];
			s[c-1]=d;
			c--;
		}
	}
}
