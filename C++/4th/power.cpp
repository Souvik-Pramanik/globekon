#include<iostream>
using namespace std;
class power
{
    int exponent;
    float base, result = 1;
    public:
        void getdata(void);
        void display(void);
};
void  power::getdata(void)
{
     cout << "Enter base : ";
     cin >> base;
     cout << "Enter exponent :";
     cin >> exponent;
     cout << endl;
}
void power::display(void)
{
     cout << base << "^" << exponent << " = ";
    while (exponent != 0) 
    {
        result *= base;
        --exponent;
    }
    cout << result<<endl;
}
int main()
{  
    power p;
    p.getdata();
    p.display();
    return 0;
}