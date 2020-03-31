#include<iostream>
#define MAX 5
struct stack
{
	int data[MAX];
	int top;
};
struct stack s;
void push()
{
	int a;
	if(s.top==MAX-1)
		std::cout << "Stack if Full!\n";
	else
	{
		std::cout << "Enter an Data\n";
		std::cin >> a;
		s.top++;
		s.data[s.top]=a;
	}
}
void pop()
{
	if(s.top==-1)
		std::cout << "Stack is Empty\n";
	else
	{
		std::cout << "Deleted Element is: " << s.data[s.top];
		s.top--;
	}
}
void display()
{
	int b;if(s.top==-1)
		std::cout << "Stack is Empty\n";
	else
	{
		std::cout << "Status of Stack :";
		for(b=s.top;b>=0;b--)
		{
			std::cout << "\n";
			std::cout << s.data[b];
			std::cout << "\n";
		}
	}
}
int main()
{
	s.top=-1;
	int n;
	while(1)
	{
		std::cout << "\nEnter Your choise :\n";
		std::cout << "1.PUSH\n2.POP\n3.display\n4.EXIT\n";
		std::cin >> n;
		switch(n)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
		}
	}
}
