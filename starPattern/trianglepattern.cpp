#include <iostream>
using namespace std;
int main()
{
    //numbers of rows
    int n;
    //user input
    cin>>n;
    //this for loop is outer loop use to row and r is number of rows
    for (int r = 0; r < n; r+=1)
    {
    //this loop is inner loop use to columns
    for (int c = 0; c <n-r-1; c+=1)
    // c<n-r-1 print the  number of space
    {
        //print the space
        cout<<"  ";
    }
   //Print the 2*r + 1 stars on each row
   for(int k=0;k<2*r+1;k+=1)
   {
       //print the star
       cout<<"*";
    
    }
    cout<<endl;
}

    return 0;
}