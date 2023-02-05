#include <iostream>
using namespace std;6
void swaping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}
void bubblesort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swaping(arr[j], arr[j + 1]);       
            }
        }   
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
    cout << " before sorting" << endl;
    display(arr, n);
    bubblesort(arr, n);
    cout << " after sorting" << endl;
    display(arr, n);
    return 0;
}