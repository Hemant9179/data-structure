#include<iostream>
using namespace std;



bool linersearch(int *arr,int size,int key){

    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else
    return linersearch(arr+1,size-1,key);
}


int main()
{
    int n,sum=0,key;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
   }
cout<<" enter key "<<endl;
cin>>key;
   bool ans=linersearch(arr,n,key);
   if(ans!=0)
    cout<<"Element is present "<<endl;
else
cout<<" Element is not present "<<endl;


 return 0;
}