#include<iostream>
#include<stdlib.h>
using namespace std;
inline int sum(int a,int b)
{
    return a+b;
}
inline int sub(int a,int b)
{
    return  b-a;
}
inline int mul(int a,int b)
{
    return  a*b;
} 
inline int division(int a,int b)
{
    return  b/a;
}
inline int avg(int a,int b)
{
    return  ((a+b)/2);
}
inline int total(int r,int t)
{
    int p;
    cout << "Enter Two number to process:"<< endl;
    cin >> r >> t;
    cout << "Summation is :"<<sum(r,t) << endl;
    cout << "Subtraction is :"<<sub(r,t) << endl;
    cout << "Multiplication is :"<<mul(r,t) << endl;
    cout << "Division is :"<< division(r,t) << endl;
    cout << "Avarage is :"<<avg(r,t) << endl;
    //cout<<"\n1.Continue\n2.Exit\n";
    //cin >> p;
}
int main()
{
    int r,t,p=1;
    total(r,t);
    while (1)
    {
        cout<<"\n1.Continue\n2.Exit\n";
        cin >> p;
        switch(p)
        {
            case 1: total(r,t);
            break;
            case 2: exit(0);
        }
    }
    cout << endl;
    
}