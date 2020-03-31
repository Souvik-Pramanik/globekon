#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter an Decimal value :\n");
	scanf("%d",&a);
	printf("Origional number is :%d\n",a);
	printf("Hexa Decimal number is :%d%d\n",a/16,a%16);
	printf("Remaining number is :%d\n",a%16);
	printf("Number is shifted by 1 bit:%d\n",a>>1);
	printf("Number is shifted by 2 bit:%d\n",a>>2);
	printf("Number is shifted by 3 bit:%d\n",a>>3);
	printf("Number is shifted by 4 bit:%d\n",a>>4);
	printf("Number is shifted by 5 bit:%d\n",a>>5);
	printf("Number is shifted by 6 bit:%d\n",a>>6);
}
