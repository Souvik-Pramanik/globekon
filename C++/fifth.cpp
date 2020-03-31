#include<iostream>
#define MAX 5
struct queue
{
	int data[MAX];
	int front=-1;
	int rear=-1;
};
struct queue s;

int enqueue()
{
	if(s.rear==MAX-1)
	{
		std::cout << "Queue if Full!\n";
	}
	/*else if (s.rear==MAX-1 && s.front==MAX)
	{
		s.rear=0;
		s.front=0;
		std::cout << "Enter a Data to Insert:\n";
		std::cin >> s.data[s.rear];
	}*/
	else if(s.front==-1 && s.rear==-1)
	{
		 s.rear=0;
		 s.front=0;
		std::cout << "Enter a Data to Insert:\n";
		std::cin >> s.data[s.rear];
	}
	else
	{
		
		s.rear=s.rear+1;
		std::cout << "Enter a data to insert:\n";
		std::cin >> s.data[s.rear];	
	}
}
int dequeue()
{
	if(s.front==-1 && s.rear==-1)
	{
		std::cout << "Queue is Empty!\n";
	}
	else if(s.front==MAX)
	 {
		 std::cout << "Delete isn't Possible!\n";
		 s.front=0;
		 s.rear=0;
	 }
	 else
	 {
		 std::cout << "Deleted Element is :" << s.data[s.front];
		 s.front=s.front+1;
	 }
}

int display()
{
	long int c;
	if(s.front==-1 && s.rear==-1)
	{
		std::cout << "Nothing to Display Bro!\n";
	}
	else if(s.front==MAX)
	 {
		 std::cout << "ALL ELEMENT'S ARE DELETED!\n";
	 }
	else
	{
		std::cout << "Status of Stack\n";
		for(c=s.front;c<=s.rear;c++)
		{
			std::cout << "\n";
			std::cout << s.data[c];
			std::cout << "\n";
		}
	}
}

int main()
{
	int a;
	s.front=-1;
	s.rear=-1;
	std::cout << "			WELCOME TO THE QUEUE PROGRAMME :)";
	while(1)
	{
		std::cout << "\nEnter Your Choise\n";
		std::cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
		std::cin >> a;
		switch(a)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
		}
	}
}
