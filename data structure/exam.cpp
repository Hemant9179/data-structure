#include <iostream>
using namespace std;
void display(int *arr, int size)
{
    for (int i = 0; i <size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}
    void inserationsort(int *arr, int size)
    {
        for (int i = 1; i < size; i++)
        {
            int temp = arr[i];
            int j = i - 1;
            for (; j >= 0; j--)
            {
                if (arr[j] > temp)
                {
                    arr[j + 1] = arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1]=temp;
        }
    }

int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"before sorting"<<endl;
    display(arr,n);
    inserationsort(arr,n);
      cout<<"After sorting"<<endl;
    display(arr,n);
    
    return 0;
}