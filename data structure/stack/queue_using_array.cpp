#include<iostream>
using namespace std;

class queue{
    
   int size;
   int qfront ;
   int rear;
   int *arr;  

    public:
    queue(int size){
       this->size=size;
       arr=new int [size];
       qfront=0;
       rear=0;
    }
    
    void enqueue(int element){
       if(rear==size){
        cout<<" queue overflow "<<endl;
       }
       else
       arr[rear]=element ;
       rear++;
    }

    int  dequeue(){
        if(rear==qfront ){
            cout<<" Queue underflow "<<endl;
            return -1;
        }
        else{
        int ans=arr[qfront];
        arr[qfront]=-1;
        qfront++;
        if(qfront==rear){
            qfront=0;
            rear=0;
        }
        return ans;
        }
    } 
     int front(){
        if(qfront==rear){
            return -1;
        }
        else
        return arr[qfront]; 
     }
     bool empty(){
        if(qfront==rear){
            return true;
        }
        else
        return false;
     }
       
};

int main()
{
    queue q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
   cout<<" front " <<q.front()<<endl;
      q.dequeue();
     cout<<" front " <<q.front()<<endl; 

 return 0;
}