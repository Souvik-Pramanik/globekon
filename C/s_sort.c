#include<stdio.h>
int selection_sort(int[],int);
void main()
{
	int s[100],a,b;
	printf("\nHow many numbers do u want for sorting?\n");
	scanf("%d",&a);
	printf("\nEnter %d elements\n",a);
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	printf("\nSorted list is :\n");
	selection_sort(s,a);
	for (b=0;b<a;b++)
    printf("%d\n",s[b]);
}
int selection_sort(int s[50],int a)
{
	for(int b=0;b<a-1;b++)
  {
    int d=b;
   
    for(int c=b+1;c<a;c++)
    {
      if (s[d] >s[c])
        d=c;
    }
    if (d!=b)
    {
      int e=s[b];
      s[b] =s[d];
      s[d] =e;
    }
  }
}
