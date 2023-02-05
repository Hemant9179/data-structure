#include<iostream>
using namespace std;

int oddoccurr(int *arr,int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2==1){
            return arr[i];
        }
    }
return -1;

}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<" odd frequency"<<oddoccurr(arr,n)<<endl;

 return 0;
}