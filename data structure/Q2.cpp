#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}
// Basic Insertion
void indDeletion(int arr[], int size, int index)
{

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {53, 45, 12, 89, 56};
    int size = 5, index = 3;
    display(arr, size);
    cout << "\n";
    indDeletion(arr, size, index);
    size -= 1;

    display(arr, size);

    return 0;
}