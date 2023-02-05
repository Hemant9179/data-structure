#include<iostream>
#include"create_tree.cpp"
using namespace std;
treenode<int>*takeinput(){
    int rootdata;
    cout<<"Enter data "<<endl;
    cin>>rootdata;
    treenode<int>*root=new treenode<int>(rootdata);

    int n;
    cout<<"Enter num of children of  "<<rootdata<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        treenode<int>*child=takeinput();
        root->children.push_back(child);
    }
    return root;
}

void printtree(treenode<int>*root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
     for(int i=0;i<root->children.size();i++){
        printtree(root->children[i]);
     }
}

int main()
{
    /*
    treenode<int>*root=new treenode<int>(1);
    treenode<int>*node1=new treenode<int>(2);
    treenode<int>*node2=new treenode<int>(3);
    treenode<int>*node3=new treenode<int>(4);
    treenode<int>*node4=new treenode<int>(5);

    root->children.push_back(node1);
    root->children.push_back(node2);  
    root->children.push_back(node3);
    root->children.push_back(node4);
*/
treenode<int>*root=takeinput();
   printtree(root);
 return 0;
}