#include<iostream>
using namespace std;
inlline int sum(int a,int,b)
{
    if(a>-1 && b>-1)
    return a+b;
    else
    {
        cout << "Terminated";
    }
    
}
int main()
{
    int a,b;
    cout << "Enter two number to add: ";
    cin >> a >> b;
    cout << "Summation is :"<< sum(a,b);
    cout << endl;
    return 0;
}