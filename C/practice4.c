#include<stdio.h>
int main()
{
	int s[50],a,b,c,d,e;
	printf("\nHow much num r you insert for this sorting ?\n");
	scanf("%d",&a);
	printf("\nEnter %d numbers :\n",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	for(b=0;b<a;b++)
		{
			for(c=0;c<a-1-b;c++)
			{
				if(s[d]>s[d+1])
				{
					e=s[d];
					s[d]=s[d+1];
					  s[d+1]=e;
			}
		}
		printf("%d",d);
		printf("%d",s[c+1]);
	printf("\nAfter Sorting ===>\n");
	printf("\nResult is :\n");
	for(b=0;b<a;b++)
	{
		printf("%d,",s[b]);
	}
	printf("\n");
}
