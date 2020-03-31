#include<iostream>
#include<stdlib.h>
using namespace std;
class calculator
{
    int sum,sub,mul,div,avg;
    int num1,num2;
    int choice,ce;
    public:
        void getdata(void);
        void calculation(void);
        void display(void);
};
void calculator::getdata(void)
{
    cout<<"Enter Two Number's: ";
    cin>>num1>>num2;
}
void calculator::calculation(void)
{
    sum=num1+num2;
    sub=num2-num1;
    mul=num1*num2;
    div=num2/num1;
    avg=(num1+num2)/2;
}
void calculator::display(void)
{
    int ce=1;
    while(1)
    {
        switch(ce)
        {
            case 1:
	    {
		calculation();
		cout<<"\n1.Summation\n2.Subtraction\n3.Multiplication\n4.Division\n5.Avarage\n";
        cin>>choice;
                switch(choice)
                {
                    case 1:cout<<"Summation is:"<<sum;
                        break;
                    case 2:cout<<"Subtraction is:"<<sub;
                        break;
                    case 3:cout<<"Multiplication is:"<<mul;
                        break;
                    case 4:cout<<"Division is:"<<div;
                        break;
                    case 5:cout<<"Avarage is:"<<avg;
                        break;
                }
		cout<<"\n1.Continue\n2.Exit\n";
        	cout<<"\n";
       		cin>>ce;
		break;
            }
            case 2:exit(0);
        }
    }
    cout<<"\n";
}
int main()
{
    calculator c;
    c.getdata();
    c.calculation();
    c.display();
    return 0;
}
