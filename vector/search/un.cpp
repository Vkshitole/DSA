#include <iostream>
#include <vector>
using namespace std;
int firstoccurrence(vector<int>arr,int n ,int key){
    int start=0;
    int end =n-1;
    int mid =(start + end)/2;
    int temp =-1;
    while(start <= end){
        if(arr[mid]==key){
            temp =mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
            
        }
        mid=(start+end)/2;
    }
    return temp;
    }
int main() {
    vector<int>arr={1,2,3,4,4,4,4,4,5,6,7,8,9};
    int n=arr.size();
    int key =4;
    int ans=firstoccurrence(arr,n,key);
    cout<<ans;
    return 0;
}
