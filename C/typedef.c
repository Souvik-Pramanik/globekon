#include<stdio.h>
#include<stdlib.h>
typedef struct implementation
{
	int a[50],b,c,se;
}implementation;
//typedef struct implementation H;
void array()
{
	implementation s;
	printf("\t\tWELCOME TO THE ARRAY IMPLIMENTATION PROGRAMME\n");
	printf("\nEnter the size of the array : ");
	scanf("%d",&s.b);
	printf("\nEnter %d numbers of elements: ",s.b);
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
	implementation p;
	printf("\nEnter a number to search\n");
  scanf("%d", &p.se);
  for (p.c=0;p.c<p.b;p.c++)
  {
    if (p.a[p.c] == p.se)    
    {
      printf("\n%d is present at location %d.\n", p.se, p.c+1);
      break;
    }
  }
  if (p.c == p.b)
    printf("\n%d isn't present in the array.\n", p.se);
 
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
