#include<stdio.h>
int main()
{
	int s[50],a,b,c,d,e,f;
	printf("Enter the size of the array: ");
	scanf("%d",&a);
	printf("\nEnter %d sorted numbers : \n",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("\nEnter the search element : ");
	scanf("%d",&c);
	d=0;
	e=a-1;
	f=(d+e)/2;
	while(d<=e)
	{
		if(c<s[f])
			f=f-1;
		else if(c>s[f])
			f=f+1;
		else if(c==s[f])
		
			
			printf("\n%d Element is Found in location %d.\n",c,f+1);
			
			return f;
		
	}
	if(e<=d)
		printf("\n%d Element isn't Found in this array.",c);
}
