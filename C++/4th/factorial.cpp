#include<iostream>
using namespace std;
class factorial
{
    int a,b=1,i;
    public:
        void getdata(void);
        void calculation(void);
        void display(void);
};
void factorial::getdata(void)
{
    cout<<"Enter till how many nubers you want for Factorial Operation:";
    cin>>a;
}
void factorial::calculation(void)
{
    for(i=a;i>0;i--)
    {
        b=b*i;
    }
}
void factorial::display(void)
{
    cout<<"Result is : "<<b;
    cout<<endl;
}
int main()
{
    factorial f;
    f.getdata();
    f.calculation();
    f.display();
}