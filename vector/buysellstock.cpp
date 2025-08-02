#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector to store stock prices
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();
    // Initialize maxProfit to 0
    int maxProfit = 0;
    // Outer loop picks the buying day
    for (int i = 0; i < n; i++)
    {
        // Inner loop picks the selling day after buying day
        for (int j = i + 1; j < n; j++)
        {
            // check and update maxProfit
            if (prices[j] - prices[i] > maxProfit)
            {
                maxProfit = prices[j] - prices[i];
            }
        }
    }
    // Print the result
    cout << "Max Profit: " << maxProfit << endl;

    return 0;
}

