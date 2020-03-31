#include<stdio.h>
int bubble_sort(int[],int);
void main()
{
	int s[100],a,b,c;
	printf("\nHow many numbers do u want for sorting?\n");
	scanf("%d",&a);
	printf("\nEnter %d elements\n",a);
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	printf("\nSorted list is :\n");
	bubble_sort(s,a);
	for(c=0;c<a;c++)
		printf("%d\n",s[c]);
}

int bubble_sort(int s[100],int a)
{
for(int b=0;b<a-1;b++)
{
for(int c=0;c<a-b-1;c++)
{
if(s[c]>s[c+1])
{
int d=s[c];
s[c]=s[c+1];
s[c+1]=d;
}
}
}
//return s;
}
