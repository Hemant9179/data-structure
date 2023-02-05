#include<iostream>
using namespace std;

 int  binary(int *arr,int s,int e,int key){
    if(s>e)
    return -1; 

  int mid=s+(e-s)/2;

    if(arr[mid]==key){
        cout<<" number is found at "<< mid<<" index"<<endl;
        return ;
    }

    if(arr[mid]<key){
      return  binary(arr,mid+1,e,key);
    }
    else{
    return binary(arr,s,mid-1,key);
    }
 }



int main()
{
    int arr[100],n,s,e,key;
    cin>>n;
    
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<" enter key   "<<endl;
   cin>>key;
   s=0;
   e=n-1;
binary(arr,s,e,key);
  
   

 return 0;
}