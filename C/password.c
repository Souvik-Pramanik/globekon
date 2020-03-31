#include<stdio.h>
int main()
{
	int i;
	char usr[10],pass[10],ch;
	printf("Enter your username :  ");
	scanf("%d",&usr[n]);
	printf("\nEnter the Password :  ");
	for(i=0;i<8;i++)
	{
		ch=getch();
		pass[i]=ch;
		ch= '*';
		printf("%d",ch);
	}
	pass[i]='\0';
	printf("Your username is : %d\nYour password is : %d\n",usr,pass);
}
