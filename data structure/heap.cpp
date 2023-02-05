#include<iostream>
using namespace std;

class heap{
     public:
     int arr[100];
     int size=0;

     void insert(int val){
        size+=1;
        int index=size;
        arr[index]=val;

        while(index > 1){
           int parent=index/2;
           if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
           }
           else{
           return  ;
           }
        }
     }
   void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
   } 
};

int main()
{

    heap h;
    h.insert(45);
    h.insert(55);
    h.insert(66);
    h.insert(74);
    h.insert(67);
    h.print();
 return 0;
}
