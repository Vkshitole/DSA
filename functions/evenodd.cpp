#include <iostream>
using namespace std;
void fun(int num){
    if(num % 2 == 0){
        cout<<"even";
        
    }
    else{
        cout<<"odd";
    }
}
int main() {
    int i;
    cout<<"enter the number:";
    cin>>i;
    cout<<"the number:"<< i <<endl;
    fun(i);
    return 0;
}