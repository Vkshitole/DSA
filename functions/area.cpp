
#include <iostream>
using namespace std;
void fun(float area,float r){
    
    area=3.14*r*r;
   
}

int main() {
    float i,a;
    cout<<"enter the raidus of circle:";
    cin>>i;
    
    cout<<"area of circle:"<< a <<endl;
    fun(a ,i);
    return 0;
}
