#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
for (int r = 0; r < n; r+=1)
{
    for (int c = 0; c <n-r-1; c+=1)
    {
        cout<<" ";
    }
    for(int k=0;k<2*r+1;k+=1){
     cout<<"*";
    }
    cout<<endl;
}
    
   for (int r = 0; r < n; r+=1)
{
    for (int c = 0; c < r; c+=1)
    {
        cout<<" ";
    }
    for(int k=0;k<2*(n-r)-1;k+=1){
        cout<<"*";
    }
    
    cout<<endl;
}
    return 0;
}
