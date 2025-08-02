#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    // Store the last element separately
    int last = arr[n - 1];
    // shift  elements to the right
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    // last element shift to first position
    arr[0] = last;
    // Print the rotated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
