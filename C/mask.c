#include<stdio.h>
void main()
{
char password[10],username[10],ch;
int i;
printf("Enter User Name :");
scanf("%d",&i);
for(i=0;i<8;i++)
{
password[i]=ch;
ch='*';
printf("%c",ch);

}
password[i]='o';
printf("\nYour Username: %d",username);
printf("\nYour Password: %s",password);
}
