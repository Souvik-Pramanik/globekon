#include<stdio.h>
int summation(int[],int,int);
int subtraction(int[],int,int);
void main()
{
	int s[10],a,b;
	long sum,sub;
	printf("Enter the size of the arary: ");
	scanf("%d",&a);
	printf("\nEnter %d numbers:\n");
	for(b=0;b<a;b++)
		scanf("%d",&s[b]);
	sum=summation(s,a,b);
	sub=subtraction(s,a,b);
	printf("\nSummation is:%d\n",sum);
	printf("\nSubtraction is:%d\n",sub);
}
int summation(int s[10],int a,int b)
{
	long sum=0;
	for(b=0;b<a;b++)
		sum=sum+s[b];
	return sum;
}
int subtraction(int s[10],int a,int b)
{
	long sub=0;
	for(b=0;b<a;b--)
		sub=s[b]-sub;
	return sub;
}
