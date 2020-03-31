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
    int q;
    cout << "Enter Two number to process:"<< endl;
    cin >> r >> t;
    cout << "Summation is :"<<sum(r,t) << endl;
    cout << "Subtraction is :"<<sub(r,t) << endl;
    cout << "Multiplication is :"<<mul(r,t) << endl;
    cout << "Division is :"<< division(r,t) << endl;
    cout << "Avarage is :"<<avg(r,t) << endl;
}
int main()
{
    int r,t,p=0,choice;
    total(r,t);
    cout<<"\n1.Continue\n2.Exit\n";
    cin >> p;
    while (1)
    {
        switch(p)
        {
            case 1:
            {
                total(r,t);
                cout<<"\n1.Summation\n2.Subtraction\n3.Multiplication\n4.Division\n5.Avarage\n";
                cin>>choice;
                switch(choice)
                {
                    case 1:cout << "Summation is :"<<sum(r,t) << endl;
                    break;
                    case 2:cout << "Subtraction is :"<<sub(r,t) << endl;
                    break;
                    case 3:cout << "Multiplication is :"<<mul(r,t) << endl;
                    break;
                    case 4:cout << "Division is :"<< division(r,t) << endl;
                    break;
                    case 5:cout << "Avarage is :"<<avg(r,t) << endl;
                    break;
                }/*
                cout<<"\n1.Continue\n2.Exit\n";
                cout << endl;
                cin >> p;*/
            }
            break;
            case 2: exit(0);
        }
    }
    cout << endl;
    
}