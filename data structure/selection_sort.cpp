#include<iostream>
using namespace std;

void swapping(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void display(int *arr,int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void selectionsort(int *arr,int size){

    int i;
    int minindex;
    for(i=0;i<size;i++){
         minindex=i;
    
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
            swapping(arr[minindex],arr[i]);
        }
    }
    }
}

int main()
{
    int n;
    cout<<"Enter size of array ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element "<<endl;
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    

     cout<<"Array before sorting"<<endl;
     display(arr,n);
     selectionsort(arr,n);
     cout<<"array after sorting "<<endl;
     display(arr,n);


 return 0;
}