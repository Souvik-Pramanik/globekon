#include<stdio.h>
#include<stdlib.h>
struct implementation
{
	long int a[50],b,c,se;
};
struct implementation s;
void array()
{
	printf("\t\tWELCOME TO THE ARRAY IMPLEMENTATION & SEARCHING PROGRAMME\n");
	printf("\nEnter the size of the array : ");
	scanf("%d",&s.b);
	printf("\nEnter %d numbers of elements: \n",s.b);
	for(s.c=0;s.c<s.b;s.c++)
	{
		scanf("%d",&s.a[s.c]);
	}
	printf("\nYour Elements are:\n");
	for(s.c=0;s.c<s.b;s.c++)
	{
		printf("\n%d. The element of array[%d] is: %d\n",s.c+1,s.c,s.a[s.c]);
	}
}
void search()
{
	int count=0;
	printf("\nEnter a number to search\n");
  scanf("%d", &s.se);
  for (s.c=0;s.c<s.b;s.c++)
  {
    if (s.a[s.c] == s.se)
    {
      printf("\n%d is present at location %d.\n", s.se, s.c+1);
      count++;
    }
  }
  if (count==0)
	{
		printf("\n%d isn't present in the array.\n", s.se);
	}
	else
	{
		printf("\n%d is present %d times in the array.\n",s.se,count);
	}
}
int main()
{
	int x;
	while(1)
	{
		printf("\n1.Array Implelementation\n2.Searching\n3.Exit\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:array();
				break;
			case 2:search();
				break;
			case 3:exit(0);
		}
	}
}
