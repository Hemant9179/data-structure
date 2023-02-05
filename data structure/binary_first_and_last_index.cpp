#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int last = size - 1;
    int mid = (start + last) / 2;
    int ans = -1;

    while (start <= last)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (key < arr[mid])
        {
            last = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + last) / 2;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int last = size - 1;
    int mid = (start + last) / 2;
    int ans = -1;

    while (start <= last)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            last = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + last) / 2;
    }
    return ans;
}

int main()
{

    int even[6] = {2, 4, 8, 8, 10, 12};
    cout << " first index  of 8 is :" << firstocc(even, 6, 8) << endl;
    cout << " last index of 8 is :" << lastocc(even, 6, 8);
    return 0;
}