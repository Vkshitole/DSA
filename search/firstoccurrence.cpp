#include <iostream>
#include <vector>
using namespace std;
//This is a function of program and return the index of array
int firstoccurrence(vector<int>arr,int n ,int key){
    //define the start index,end index and mid index
    int start=0;
    int end =n-1;
    int mid =(start + end)/2;
    //temp stored the index of first occurrence
    int temp =-1;
    //while loop search the index
    while(start <= end){
        //find the array mid element == key
        if(arr[mid]==key){
            //save the index of first occurrence
            temp =mid;
            //searching in the left half side
            end=mid-1;
        }
        //find the key > array mid element
        else if(key>arr[mid]){
             //searching in the right half side
            start=mid+1;
        }
        else {
            //array is smaller than mid element then find the left side
            end=mid-1;
            
        }
        //formula of binary search
        mid=(start+end)/2;
    }
    //return the temp value in first occurrence
    return temp;
    }
int main() {
    //array stored the element and define the vector
    vector<int>arr={1,2,3,4,4,4,4,4,5,6,7,8,9};
    //n is array size() of element
    int n=arr.size();
    //key is our target
    int key =4;
    //call the fun
    int ans=firstoccurrence(arr,n,key);
    //print statement
    cout<<ans;
    return 0;
}
