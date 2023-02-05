#include<iostream>

int sumofarray(int *arr,int size,int sum=0){
    if( size==0){
    return sum;
    }
    
    return sumofarray(arr,size-1,sum+=arr[size-1]);
}

using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
   }
   int ans=sumofarray(arr,n,sum);

cout<<"sum of array element "<<ans<<endl;
 return 0;
}