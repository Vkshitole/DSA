#include <iostream>
using namespace std;
int numb(int n,int add)
{
    for(int i=1;i<=n;i+=1)
    {
       if(i%2==0){
           add+=i;
       }
    }
    cout<<"Sum of even no:"<<add;
    return 0;
}

int main()
{
    int n1,sum=0;
    cout<<"enter the element:";
    cin>>n1;
    numb(n1,sum);
}