#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    //constructor...
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter the data..."<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for inserting in the left.."<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting in the right.."<<endl;
    root->right = buildTree(root->right);
    return root;

}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        
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
void InOrder(node* root){
    //basr case...
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);

}
void PreOrder(node* root){
    //basr case...
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    
    PreOrder(root->right);

}
void PostOrder(node* root){
    //basr case...
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    
    PostOrder(root->right);
    cout<<root->data<<" ";

}
int Hight(node* root){
    //base case..
    if(root == NULL){
        return 0;
    }
    int left= Hight(root->left);
    int right = Hight(root->right);

    int ans= (max(left,right)+1);
    return ans;
}
bool IsBalance(node* root){
    
    //base case...
    if(root==NULL){
        return true;
    }
    bool left=IsBalance(root->left);
    bool right=IsBalance(root->right);

    bool diff = abs(hight(root->left)- hight(root->right))<= 1;
    if(left && right && diff){
        return 1;
    }
    else{
        return false;
    }
}
int main()
{
    node* root = NULL;

    //creating a tree..
    root= buildTree(root);
    //level order..
    levelOrderTraversal(root);
    InOrder(root);
    PreOrder(root);
    
    PostOrder(root);
    cout<<endl<<"Hight of the tree is"<<Hight(root);
    IsBalance(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    return 0;
}