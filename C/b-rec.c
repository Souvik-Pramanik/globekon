#include<stdio.h>
int binary_rec(int[], int ,int ,int);
int main()
{
	int s[50],a,b,c,d,e,f,g;
	printf("Enter the size of the array :");
	scanf("%d",&a);
	printf("\nEnter %d elments in the array :\n",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("\nEnter the element to search :");
	scanf("%d",&c);
	g=binary_rec(s,0,a-1,c);
	if(g==-1)
	printf("%d Element is not found in the array.",c);
	else
	printf("%d Element is found in the array at position %d",c,g+1);
}

int binary_rec(int s[], int d,int e,int c)
{
	int f;
	if(d>=e)
	return -1;
	else
	{	f=(d+e)/2;
		if(s[f]==c)
			return f;
		else if(c<s[f])
			binary_rec(s,d,f-1,c);
		else
			binary_rec(s,f+1,e,c);
	}
}
