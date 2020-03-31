#include<iostream>
using namespace std;
inline int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
/*fact(int b,int i=1)
{
    for(b=a;b>0;b++)
    i=i*a;
}*/
int main()
{
    int a;
    cout<<"Enter a NUmber:";
    cin>>a;
    cout<<"Result is : "<<fact(a)<<endl;
    return 0;
}