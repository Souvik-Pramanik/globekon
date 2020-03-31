#include<stdio.h>
#include<stdlib.h>
/*struct stack
{
	int data[10];
	int top;
};
struct stack s;*/
int main()
{
int arr[50],a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,t,first,last,middle,search,position,swap;
void insertion_array()
{
	{	
	printf("\n			WELCOME TO THE ARRAY INSERTION PROGRAMME\n");
	printf("Enter the size of the array :\n");
	scanf("%d",&a);
	printf("Enter %d elements : \n",a);
	for(c=0;c<a;c++)
		scanf("%d",&arr[c]);
	printf("Enter the location where u want to enter the new element : \n");
	scanf("%d",&b);
	printf("Enter the new element : \n");
	scanf("%d",&d);
	for(c<a-1;c>=b-1;c--)
		arr[c+1]=arr[c];
	arr[b-1]=d;
	printf("Resultant is : \n");
	for(c=0;c<a+1;c++)
		printf("\n=>%d\n",arr[c]);
	}
}
void deletion_array()
{
	{
	printf("\n			WELCOME TO THE ARRAY DELETION PROGRAMME\n");
	printf("\nEnter the size of the array :");
	scanf("%d",&e);
	printf("\nEnter %d elements :\n",e);
	for(f=0;f<e;f++)
		scanf("%d",&arr[f]);
	printf("\nEnter the position from where u want to delete an element :");
	scanf("%d",&g);
	if(g>e)
		printf("\nDeletion is'n possible!\n   so, go to hell !!!\n");
	else
	{
		for(f=g-1;f<e-1;f++)
		{
			arr[f]=arr[f+1];
		}
	printf("\nResultant is :");
	for(f=0;f<e-1;f++)
		printf("\n%d\n",arr[f]);
	}	
}

}
void linear_search()
{
	printf("\n			WELCOME TO THE LINEAR SEARCH PROGRAMME\n");
  printf("Enter number of elements in array\n");
  scanf("%d",&h);
 
  printf("Enter %d integer(s)\n",h);
 
  for (i=0;i<h;i++)
    scanf("%d",&arr[i]);
 
  printf("Enter a number to search\n");
  scanf("%d",&j);
 
  for (i=0;i<h;i++)
  {
    if (arr[i]==j)    
    {
      printf("%d is present at location %d.\n",j,i+1);
      break;
    }
  }
  if (i == h)
    printf("%d isn't present in the array.\n",j);
}
void binary_search()
{
	printf("\n			WELCOME TO THE BINARY SEARCH PROGRAMME\n");
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for(o=0;o<n;o++)
      scanf("%d",&arr[o]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first=0;
   last=n-1;
   middle = (first+last)/2;
 
   while (first <= last) 
   {
      if (arr[middle] < search)
         first = middle + 1;    
      else if (arr[middle] == search) 
      {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
  
}
void bubble_sort()
{
	printf("\n			WELCOME TO THE BUBBLE SORT PROGRAMME\n");
	printf("\nHow much number u want for sorting\n");
	scanf("%d",&k);
	printf("\nEnter %d elements\n",k);
	for(l=0;l<k;l++)
		scanf("%d",&arr[l]);
	for(l=0;l<k-1;l++)
	{
		for(m=0;m<k-l-1;m++)
		{
			if(arr[m]>arr[m+1])
			{
				n=arr[m];
				arr[m]=arr[m+1];
				arr[m+1]=n;
			}
		}
	}
	printf("\nSorted list is :\n");
	for(l=0;l<k;l++)
		printf("%d;",arr[l]);
	printf("\n");
}
void selection_sort()
{
	printf("\n			WELCOME TO THE SELECTION SORT PROGRAMME\n"); 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
 
  for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (arr[position] > arr[d])
        position = d;
    }
    if (position != c)
    {
      swap = arr[c];
      arr[c] = arr[position];
      arr[position] = swap;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
    printf("%d\n", arr[c]);
}
void insertion_sort()
{
	printf("\n			WELCOME TO THE INSERTION SORT PROGRAMME\n");
	printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && arr[d-1] > arr[d]) {
      t          = arr[d];
      arr[d]   = arr[d-1];
      arr[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) 
  {
    printf("%d\n", arr[c]);
  }
}
void quick_sort()
{
	
}
void stack_implimentation()
{
	struct stack
{
	int data[10];
	int top;
};
struct stack s;
void push()
{
if(s.top==9)
{
	printf("\nStack is Overflow.");
}
else
{
	printf("\nEnter an element :");
	scanf("%d",&i);
	s.top++;
	s.data[s.top]=i;
}
}
void pop()
{
if(s.top==-1)
	printf("\nStack is Empty.");
else
{
	printf("\n%d element is deleted",s.data[s.top]);
	s.top--;
}
}
void display()
{
int c;
	printf("\nStatus of Stack");
	for(c=s.top;c>=0;c--)
{
		printf("\n%d",s.data[c]);
}
}
int main()
{
s.top=-1;
int n;
while(1)
{
	printf("\n=====>Choise Any One At A Time<=====\n");
	printf("\n1. PUSH \n2. POP \n3. Display \n4. EXIT");
	printf("\nEnter your choise");
	scanf("%d",&n);
	switch(n)
{
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	case 4:exit(0);
}
}
}

}

	int x;
	while(2)
	{
		printf("\n====> Enter Your Choise <====\n");
		printf("1.Inser an Element in any position of an array\n2.Delte an element in any position of an array\n3.Linier Search\n4.Binary Search\n5.Bubble Sort\n6.Selction Sort\n7.Insertion Sort\n8.Quick Sort\n9.Merge Sort\n10.Stack Implementation\n11.Queue Implementation\n12.\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1: insertion_array();
				break;
			case 2: deletion_array();
				break;
			case 3: linear_search();
				break;
			case 4: binary_search();
				break;
			case 5: bubble_sort();
				break;
			case 6: selection_sort();
				break;
			case 7: insertion_sort();
				break;
			//case 8: quick_sort();
				//break;
			/*case 9: merge_sort();
				break;*/
			case 10: stack_implimentation();
				break;
			/*case 11: queue_implimentation();
				break;*/
			case 17: exit(0); 
		}
	}
}
