#include<iostream>
int linear_search(int[],int,int);
int main()
{
	int s[50],a,b,c,d=0;
	std::cout << "Enter the Array size :";
	std::cin >> a;
	std::cout << "\nEnter << a << elements";
	for(b=0;b<a;b++)
	{
		std:cin >> s[b];
	}
	std::cout << "\nEnter Your Search Element :";
	std::cin >> c;
	linear_search();
	for(b=0;b<a;b++)
	{
		if(s[b]==c)
		{
			std::cout << "\nElement found in postition :\n";
		}
	}
	if(d==0)
	{
		std::cout << "\nElement << c << not found\n";
	}
	else
	{
		std::cout << "\n<< c << is present << d << times in the array\n`	1";
	}
}
