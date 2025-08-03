#include <iostream>
#include <vector>
using namespace std;
int main() {
    //define the vector and stored the element of array
    vector<int>arr={1,2,3,4,5,6,7};
    // key is our target
    int key=6;
    //array size is "n"
    int n=arr.size();
//linear search start the index "0" and end the last element "n"
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
        }
    }
    return 0;
}