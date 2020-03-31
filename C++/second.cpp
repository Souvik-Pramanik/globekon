#include<iostream>
int main()
{
	float div;
	long int a,b,s,sub,mul,sum;
	std::cout<<"Enter 2 data's to insert :\n";
	std::cin >> a;
	std::cin >> b;
	std::cout<<"Enter your choise :\n";
	sum=a+b;
	sub=b-a;
	mul=a*b;
	div=a/(float)b;
	while(1)
	{
		std::cout<<"1.Summation\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n";
		std::cin >> s;
		switch(s)
		{
			case 1:sum;
		std::cout<<"Result is :" <<sum;
		std::cout<<"\n";
				break;
			case 2:sub;
		std::cout<<"Result is :" <<sub;
		std::cout<<"\n";
				break;
			case 3:mul;
		std::cout<<"Result is :" <<mul;
		std::cout<<"\n";
				break;
			case 4:div;
		std::cout<<"Result is :" <<div;
		std::cout<<"\n";
				break;
			case 5:
				std::cout<<"Programme Terminated\n";
				std::cout<<"Bhar Me Ja sala !!!\n";
				exit(0);
		}
	}
}
