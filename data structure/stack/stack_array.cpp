#include <iostream>
#include <Stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << " stack overflow " << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else{
            cout << " stack underflow " << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << " stack is empty " << endl;
            return -1;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(12);
    st.push(14);
    st.push(16);
    st.push(18);

    cout << st.peek() << endl;
    st.pop();
     cout << st.peek() << endl;
     if(st.empty()){
        cout<<"stack is empty  "<<endl;
     }
     else
     cout<<"Stack is non-empty "<<endl;
    return 0;
}