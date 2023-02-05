#include<iostream>
using namespace std;

bool is_sortedarray(int *arr,int size){
    if(size==0 ||size==1){
        return true;
    }
    if(arr[0]>arr[1])
        return false;
    
        else{
      return is_sortedarray(arr+1,size-1);

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
bool ans= is_sortedarray(arr,n);
if(ans)
    cout<<" Array is sorted "<<endl;
else
cout<<" Array is not sorted"<<endl;

 return 0;
}