#include<stdio.h>
int binary_ite(int[],int,int,int);
void main()
{
	int s[50],a,b,c,g;
	printf("Enter the size of the array :");
	scanf("%d",&a);
	printf("\nEnter %d elements int array :",a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&s[b]);
	}
	printf("Enter element to search :");
	scanf("%d",&c);
	g=binary_ite(s,0,a-1,c);
	if(g==-1)
	printf("\n%d elemnet is not found in the array \n",c);
	else
	printf("%d element is successfully found in position %d\n",c,g+1);
}

int binary_ite(int s[50],int d,int e,int c)
{
	int f,a;
	while(d<=e)
	{
		f=(d+e)/2;
		if(s[f]==c)
		return f;
		else if(c<s[f])
		e=f-1;
		else
		d=f+1;
	}
	return -1;
}
