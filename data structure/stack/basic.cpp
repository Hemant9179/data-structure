#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(5);
    s.push(6);
    s.push(8);
    s.push(9);
    s.pop();
    s.pop();

    cout<<"top element is "<<s.top()<<endl;
   
   cout<<" empty or not "<<s.empty()<<endl;
   
  cout<<" size "<< s.size()<<endl;
 return 0;
}