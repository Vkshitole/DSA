#include <iostream>
using namespace std;

void num(int n, int fact)
{
for(int i = 1; i <= n; i++)
 {
 fact = fact * i;
 }
 cout<< "fact:"<<fact << endl;
}

int main()
{
 int n, fact = 1;
 cout << "Enter the number: ";
cin >> n;
 num(n, fact);
 return 0;
}