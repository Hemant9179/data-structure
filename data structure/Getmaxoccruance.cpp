#include <iostream>
using namespace std;

char Getmaxoccurance(string s)
{
int  arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    // find maximum occurance
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main()
{
    string s;
    cin >> s;
    cout << Getmaxoccurance(s) << endl;

    return 0;
}