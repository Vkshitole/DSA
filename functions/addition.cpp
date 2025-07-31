#include <iostream>
using namespace std;
int addition(int a,int b)
{
    int c=a+b;
    cout<<c;
    return c;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    addition(x,y);
}