#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
};
int main()
{
node *node1= new node();
cout<<node1->data<<endl;
cout<<node1->next<<endl;
cout<<node1->next<<endl;
 return 0;
}