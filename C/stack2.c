#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data[10];
	int top;
};
typedef struct stack s;
void push()
{
int i;
if(s.top==9)
{
	printf("\nStack is Overflow.");
}
else
{
	printf("\nEnter an element :");
	scanf("%d",&i);
	s.top++;
	s.data[s.top]=i;
}
}
void pop()
{
if(s.top==-1)
	printf("\nStack is Empty.");
else
{
	printf("\n%d element is deleted",s.data[s.top]);
	s.top--;
}
}
void display()
{
int c;
	printf("\nStatus of Stack");
	for(c=s.top;c>=0;c--)
{
		printf("\n%d",s.data[c]);
}
}
int main()
{
s.top=-1;
int n;
while(1)
{
	printf("\n=====>Choise Any One At A Time<=====\n");
	printf("\n1. PUSH \n2. POP \n3. Display \n4. EXIT");
	printf("\nEnter your choise");
	scanf("%d",&n);
	switch(n)
{
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	case 4:exit(0);
}
}
}
