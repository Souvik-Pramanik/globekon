#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int a,b,c;
	printf("Enter a decimal number :");
	scanf("%d",&a);
	if(a<=15)
	{
		if(a>=0 && a<=9)
		{
			printf("%d in HexaDecimal is :%d\n",a,a);
		}
		else if(a>9 && a<16)
		{
			if(a==10)
				{
					printf("%d in HexaDecimal is :A\n",a);
				}
			else if(a==11)
			{
				printf("%d in HexaDecimal is :B\n",a);
			}
			else if(a==12)
			{
				printf("%d in HexaDecimal is :C\n",a);
			}
			else if(a==13)
			{
				printf("%d in HexaDecimal is :D\n",a);
			}
			else if(a==14)
			{
				printf("%d in HexaDecimal is :E\n",a);
			}
			else if(a==15)
			{
				printf("%d in HexaDecimal is :F\n",a);
			}
		}
	}
	else if(a>=16 && a<=25)
	{
		printf("Hexa Decimal number is :%d%d\n",a/16,a%16);
	}
	/*else// if(a>=26)
	{
		b=a/16;
		c=a%16;
		if(b<=9 && c<=9)
		{
			printf("Hexa Decimal number is :%d%d\n",b,c);
		}
	}*/
}
/*int main()
{
	int x;
		while(1)
		{	printf("1.Binary to Hexa-Decimal conversion\n2.Exit\n");
			scanf("%d",x);
			switch(x)
			{
				case 1:hex();
					break;
				case 2:exit(0);
			}
		}
}*/
