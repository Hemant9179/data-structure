#include<iostream>
using namespace std;
int main()
{
    int n,key,i;
    cout<<"enter a size of array";
     cin>>n;


     int arr[n]; 
     cout<<"enter element";
    for(int j=0; j<n; j++){
        cin>>arr[j];
    }

cout<<"enter key";
cin>>key;
for( i=0; i<n; i++){
    if(arr[i]==key){
        cout<< i;
    }
    

}
if(i==n){
cout<<"this key is not present in this array";

}
 return 0;
}