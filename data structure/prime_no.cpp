#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter a number";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number for "<<i <<"\n";
            cout<<endl;
        }
        else
            cout << n << " is a prime number for"<<i <<"\n";
        
    }
    
    return 0;
}