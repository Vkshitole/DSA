#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int r = 0; r < n; r+=1) {
        if (r == 0 || r == n - 1)
        {
            for (int c = 0; c < r+1; c+=1) {
                cout <<c+1;
            }
        }
            else {
                cout <<"1";
                for (int i = 0; i < r+1-2; i+=1)
                {
                     cout << " ";
                }
        cout <<r+1;
        }
        cout << endl;
    }

    return 0;
}