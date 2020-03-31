#include<stdio.h>
#include<stdlib.h>
struct binary
{
	long int a,b,c,d;
	char e[10];
};
struct binary s;
void debi()
{
	printf("Enter an Decimal number between (0 - 1024):\n");
	scanf("%d",&s.a);
	if(s.a>=0 && s.a<=3)
		{
			s.d=1;
		}
		else if(s.a>=4 && s.a<=7)
		{
			s.d=2;
		}
		else if(s.a>=8 && s.a<=15)
		{
			s.d=3;
		}
		else if(s.a>=16 && s.a<=31)
		{
			s.d=4;
		}
		else if(s.a>=32 && s.a<=63)
		{
			s.d=5;
		}
		else if(s.a>=64 && s.a<=127)
		{
			s.d=6;
		}
		else if(s.a>=128 && s.a<=255)
		{
			s.d=7;
		}
		else if(s.a>=256 && s.a<=511)
		{
			s.d=8;
		}
		else if(s.a>=512 && s.a<=1023)
		{
			s.d=9;
		}
		else if(s.a==1024)
		{
			s.d=10;
		}
		else
		{
			printf("THE PROGRAMME IS TERMINATED\nCause\n  Sir %s, you can't take more than 1024. \n\n",s.e);
		}
	if(s.d>=1 && s.d<=10)
	{	
		printf("%d in Binary is :\n",s.a);
		for(s.b=s.d;s.b>=0;s.b--)
		{
				s.c=s.a>>s.b;
				if(s.c & 1)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
		}
		printf("\n\n");
	}
	else
	{
		printf("\n");
	}
	
	//return 0;
}
int main()
{
int n;
printf("Enter You'r First name :\n");
	scanf("%s",&s.e);
while(1)
{
	printf("Press 1 to go ahead !!! & 0 to exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:debi();
			break;
		case 0:exit(0);
	}
}
}
