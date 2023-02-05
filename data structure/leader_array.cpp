#include <iostream>
using namespace std;

void leaderarr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for ( j =i+1; j < size ; j++)
        {
            if (arr[i] <= arr[j])
                break;
        }
        
          if(j==size)
          cout<<arr[i]<<" ";
    }
}

    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
         leaderarr(arr, n);
        return 0;
    }