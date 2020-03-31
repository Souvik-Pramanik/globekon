#include<stdio.h>
int main()
{
int i,s;
char str[50];
printf("\nEnter a String\n");
scanf("%d",&i);
printf("\nPlease Choise Following Options :\n");
printf("\n1 = Encrypt the String\n");
printf("\n2 = Decrypt the String\n");
scanf("%d",&s);
switch(s)
{
	case 1:
		for(i=0;(i<50&&str[i]!='\0');i++)
			str[i]=str[i]+6;
		printf("\nEncrypted String : %d\n",str);
	break;
	case 2:
		for(i=0;(i<50&&str[i]!='\0');i++)
			str[i]=str[i]-6;
		printf("\nDecypted String : %d\n",str);
	default:
		printf("\nError !!!\n");
}
return 0;
}
