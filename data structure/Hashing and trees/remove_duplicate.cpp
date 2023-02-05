#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int>remove_duplicate(int *arr,int size){
    vector<int>output;
    unordered_map<int ,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(arr[i])>0){
          continue;
        }
        seen[arr[i]]=true;
        output.push_back(arr[i]);
    }
    return output;
}
int main()
{

    int arr[]={ 4, 5, 2, 4, 1, 5, 2, 7, 9 ,3 ,3, 4, 1, 5, 2};

vector<int>output=remove_duplicate(arr, 15);
       for(int i=0;i<output.size();i++)
       cout<<output[i]<<" ";
 return 0;
}