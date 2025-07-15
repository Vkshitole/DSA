#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int r = 0; r < n; r+=1)
    {
        for (int c = 0; c <=r; c+=1)
        {
            cout<<c+1;
        }
        for(int i=r-1;i>=0;i--)
        {
            cout<<i+1;
        }
    cout<<endl;
    
}
    
    return 0;
}