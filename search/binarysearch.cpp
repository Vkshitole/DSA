#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Sorted  element in array
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Key is our target
    int key = 5;
    //start index
    int start = 0;
    //end index
    int end = arr.size() - 1;
    //mid index
    int mid;
//"binary search" search a element starting point to end point
    while (start <= end) {
        //search a mid index // formula of binary search
        mid = (start + end) / 2;
        //find the mid point and then return the mid index
        if (arr[mid] == key) {
            cout << mid << endl;
            return 0;
        }
        //key is > mid then find the right side
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            //key is < mid then find the left side
            end = mid - 1;
        }
    }
    //print statement
    cout << "Key is not found" << endl;
    return 0;
}
