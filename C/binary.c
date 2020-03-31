#include<stdio.h>
#include<stdlib.h>

void bin()
{
	long long int a,b,c,e,d;
	/*char e[10];
	printf("Enter You'r First name :\n");
	scanf("%s",&e);*/
	printf("Enter an Decimal number between (0 - 1024):\n");
	scanf("%d",&a);
	if(a>=0 && a<=3)
		{
			d=1;
		}
		else if(a>=4 && a<=7)
		{
			d=2;
		}
		else if(a>=8 && a<=15)
		{
			d=3;
		}
		else if(a>=16 && a<=31)
		{
			d=4;
		}
		else if(a>=32 && a<=63)
		{
			d=5;
		}
		else if(a>=64 && a<=127)
		{
			d=6;
		}
		else if(a>=128 && a<=255)
		{
			d=7;
		}
		else if(a>=256 && a<=511)
		{
			d=8;
		}
		else if(a>=512 && a<=1023)
		{
			d=9;
		}
		else if(a==1024)
		{
			d=10;
		}
		else
		{
			printf("THE PROGRAMME IS TERMINATED\n");
		}
	if(d>=1 && d<=10)
	{	
		printf("%d in Binary is :\n",a);
		for(b=d;b>=0;b--)
		{
				c=a>>b;
				if(c & 1)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
		}
		printf("\n");
	}
	else
	{
		printf("Laura %s, khanki toke na bollam j 1024 er besi nibi na. \n",e);
	}
	
	//return 0;
}
int main()
{
int n;
char e[10];
	printf("Enter You'r First name :\n");
	scanf("%s",&e);
while(1)
{
	printf("Press 1 to go ahead !!! & 0 to exit");
	scanf("%d",&n);
	switch(n)
	{
		case 1:bin();
			break;
		case 0:exit(0);
	}
}
}
