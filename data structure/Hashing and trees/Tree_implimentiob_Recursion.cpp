#include<iostream>
#include<queue>
using namespace std;
class node{
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
node *buildTree(node *root){
    cout<<" Enter root data "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL ;
    }
   cout<<" enter data to inserting the left node "<< data<<endl;
   root->left=buildTree(root->left);
   cout<<" enter data to inserting the right node "<<data<<endl;
   root->right=buildTree(root->right);

   return root;

}
void levelordertraversal(node * root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
       
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<<temp->data<<" ";
             if(temp->left){
            q.push(temp->left);
        }
            if(temp->right){
                  q.push(temp->right);
            }
        }
       
    }
}
void inorder(node *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node * root){
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
   node * root=NULL;
   root=buildTree(root);

   cout<<"Printing the level order traversal output "<<endl;
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
// 1 3 7 -1 -1 11 -1 -1 5 17  -1 -1 -1   
   levelordertraversal(root);
   cout<<"inorder travrersal  "<<endl;
   inorder(root);
   cout<<" preorder travelsal "<<endl;


   preorder(root);
   cout<<" postorder travelsal "<<endl;
   postorder(root);
 return 0;
}