#include<iostream>
using namespace std;
#include<queue>
class node {
public:
int data;
node*left;
node*right;

node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
}
};
node*buildtree(node * root){

cout<<"Enter the data "<<endl;
int data;
cin>>data;
root=new node(data);

if(data==-1){
    return NULL;
}
cout<<"Enter for inserting in left of  "<<data<<endl;
root->left=buildtree(root->left);
cout<<"Enter for inserting in right of  "<<data<<endl;
root->right=buildtree(root->right);
return root;

}
void levelordertraversal(node* root){
queue<node*>q;
q.push(root);
}
int main()
{
node* root=NULL;

root=buildtree(root);


 return 0;
}
