#include<stdio.h>
#include<stdlib.h>
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
int main()
{
	int s[100],a,b,c,j;
	printf("\nHow many numbers do u want for sorting?\n");
	scanf("%d",&a);
	printf("\nEnter %d elements\n",a);
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	printf("\nSorted list is :\n");
		printf("\n\t===>>>ENTER YOUR CHOISE<<<===\n");
	printf("\n\t1.Bubble Sort\n\t2.Selection Sort\n\t3.Insertion Sort\n\n");
	printf("\nEnter your Choise:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:bubble_sort(s,a);
		{
			for(c=0;c<a;c++)
				printf("%d\n",s[c]);
		}
			break;
		case 2:selection_sort(s,a);
		{
			for (b=0;b<a;b++)
				printf("%d\n",s[b]);
		}
			break;
		case 3:insertion_sort(s,a);
		{
			for (b=0;b<=a-1;b++)
				printf("%d\n",s[b]);
		}
		break;
	}
			 
	while(1)
	{
	printf("\n1.If You Want To Go Ahead\n2.EXIT\n");
	scanf("%d",&j);
	switch(j)
	{
		case 1: 
		{
		printf("\n\t===>>>ENTER YOUR CHOISE<<<===\n");
	printf("\n\t1.Bubble Sort\n\t2.Selection Sort\n\t3.Insertion Sort\n\n");
	printf("\nEnter your Choise:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:bubble_sort(s,a);
		{
			for(c=0;c<a;c++)
				printf("%d\n",s[c]);
		}
			break;
		case 2:selection_sort(s,a);
		{
			for (b=0;b<a;b++)
				printf("%d\n",s[b]);
		}
			break;
		case 3:insertion_sort(s,a);
		{
			for (b=0;b<=a-1;b++)
				printf("%d\n",s[b]);
		}
			break;
	}
		}
			break;
		case 2:exit(0);
}
}
}
