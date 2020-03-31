#include<stdio.h>
#include<ctype.h>
#define MAX 100
#define POSTFIX 100
int stack[MAX];
int top=-1;
void push(int item)
{
	if(top>=MAX-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
}
int pop()
{
	int item;
	if(top<0)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		item=stack[top];
		top=top-1;
		return item;
	}
}
void evalpostfix(char postfix[])
{
	int i;
	char ch;
	int A,B;
	for(i=0;postfix[i] != ;i++)
	{
		ch=postfix[i];
		if(isdigit(ch))
		{
			push(ch-'0');
		}
		else if(ch=='+' || ch=='*' || ch=='-' || ch=='/')
		{
			A=pop();
			B=pop();
			switch(ch)
			{
				case '*';
				val=B*A;
				break;
				case '/';
				val=B/A;
				break;
				case '+';
				val=A+B;
				break;
				case '-';
				val=B-A;
				break;
			}
			push(val)
		}
	}
	printf("Result of Expressions : %d\n",pop());
}
int main()
{
	int i;
	char postfix[POSTFIX];
	printf("Enter the the postfix expressioms ,\n press right parenthexis ')' for end the expressions.");
	for(i=0;i<=POSTFIX-1;i++)
	{
		scanf("%d",&postfix[i]);
		if(postfix[i]==')')
		{
			break;
		}
	}
	evalpostfix();
	return 0;
}
