#include<iostream>
using namespace std;

 int findpeak(int *arr,int s, int e ,int size){
if(s<e){
    return 0 ;
}
int mid=s+(e-s)/2;
if(arr[mid]<arr[mid+1]){
   return  findpeak(arr,mid+1, e , size);
}
else
 return findpeak( arr, s,  mid-1, size);



}
int main()
{
    int  arr[100],n,s,e;
    cin>>n;

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   s=0;
    e=n-1;
 int ans=findpeak(arr,s,e,n);
  cout<<" peak is "<<ans<<endl;
 return 0;
}