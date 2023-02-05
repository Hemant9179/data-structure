#include<iostream>
using namespace std;
class TwoStack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s)
    {
        this->size = s;
        arr = new int[size];
        top1 = -1;
        top2=s;
    }
    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else{
            cout << " stack overflow " << endl;
        }
    }
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else{
            cout << " stack overflow " << endl;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            cout << " stack underflow " << endl;
        }
    }
    int pop2()
    {
        if (top2 <size )
        {
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            cout << " stack underflow " << endl;
        }
    }
  int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << " stack is empty " << endl;
            return -1;
        }
    }
      int peek2()
    {
        if (top2 >= 0)
        {
            return arr[top2];
        }
        else
        {
            cout << " stack is empty " << endl;
            return -1;
        }
    }
};
int main()
{
   TwoStack st(5);
   st.push1(15);
   st.push1(47);
   st.push2(65);
   st.push2(84);

   cout<<" top "<<st.peek1()<<endl;
     cout<<" top "<<st.peek2()<<endl;
 return 0;
}