#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int r = 0; r < n; r+=1) {
        if (r == 0 || r == n - 1) {
            for (int c = 0; c < n-r; c+=1) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int i = 0; i < n - r-2; i+=1) {
                cout << " ";
            }
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}