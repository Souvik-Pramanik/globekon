#include<stdio.h>
#include<stdlib.h>
struct implementation
{
	long int a[50],b,c,d,se,o,first,last,middle,n,search,i,x,pos,l,u;
};
struct implementation s;

void linear_search()
{
	int count=0;
	printf("\nEnter the size of the array : ");
	scanf("%d",&s.b);
	printf("\nEnter %d numbers of elements: \n",s.b);
	for(s.c=0;s.c<s.b;s.c++)
	{
		scanf("%d",&s.a[s.c]);
	}
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


void binary_search()
{
   printf("Enter number of elements\n");
   scanf("%d",&s.n);
   printf("Enter %d integers\n", s.n);
   for(s.o=0;s.o<s.n;s.o++)
      scanf("%d",&s.a[s.o]);
   printf("Enter value to find\n");
   scanf("%d", &s.search);
   s.first=0;
   s.last=s.n-1;
   s.middle = (s.first+s.last)/2;
   while (s.first <= s.last) 
   {
      if (s.a[s.middle] < s.search)
         s.first = s.middle + 1;    
      else if (s.a[s.middle] == s.search) 
      {
         printf("%d found at location %d.\n", s.search, s.middle+1);
         break;
      }
      else
         s.last = s.middle - 1;
 
      s.middle = (s.first + s.last)/2;
   }
   if (s.first > s.last)
      printf("Not found! %d isn't present in the list.\n", s.search);
}

int binary_search(int[],int,int,int);
void binary_search_recursive()
{
	printf("Enter the size of the array: ");
	scanf("%d",&s.d);
	printf("\nEnter %d numbers of elements: \n",s.d);
	for(s.i=0;s.i<s.n;s.i++)
	{
		scanf("%d",&s.a[s.i]);
	}
	printf("Enter a element to search: ");
	scanf("%d",&s.x);
	s.pos=binary_search(s.a,0,s.n-1,s.x);
	if(s.pos==-1)
	{
		printf("Unsuccessful Try !!!\n");
	}
	else
	{
		printf("Successfully find in %d position.\n",s.pos+1);
	}
}
int binary_search(int s.a[],int s.l,int s.u,int s.x)
{
	int mid;
	if(s.l>s.u)
		return-1;
	else
	{
		mid=(s.l+s.u)/2;
		if(s.a[mid]==s.x)
			return mid;
		else if(s.a[mid]>s.x)
			binary_search(s.a,s.l,mid-1,s.x);
		else
			binary_search(s.a,mid+1,s.u,s.x);
	}
}z


int main()
{
	int x;
	while(1)
	{
		printf("\n1.Linear Searching\n2.Binary Search\n3.Binary Search Recursive\n4.Exit\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:linear_search();
				break;
			case 2:binary_search();
				break;
			case 3:binary_search_recursive();
				break;
			case 4:exit(0);
		}
	}
}
