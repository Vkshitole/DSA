#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // array of  majority element and defind the vector
    vector<int> arr = {1, 2, 3, 2, 2};
    //n is size of  array
    int n = arr.size();
     //This is a outer loop and pick the one by one elements
    for (int i = 0; i < n; i++)
    {
        int count = 0;
    //This inner loop compares the i elements with j elements
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        // n/2 formula of majority element
        if (count > n / 2)
        {
            cout << "Majority element: " << arr[i];
            return 0;
        }
    }
}
