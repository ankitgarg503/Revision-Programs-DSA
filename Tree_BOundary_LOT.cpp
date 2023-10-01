  #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node *right;
    Node(int data){
        this->data = data;
        this->left =NULL;
        this->right =NULL;
    }
};

Node* insertNode(Node* root, int data){
    if(root == NULL){
        Node* newNode = new Node(data);
        return(newNode);
    }
    if(root->data>data){
        root->left=insertNode(root->left,data);
    }
    else{
        root->right=insertNode(root->right,data);
    }
    return root;
}


Node* createBST(Node* root){
    int data;
    cout<<"Enter data     ";
    while(1){
       cin >> data;
         if(data==-1){
            break;
        }

      root= insertNode(root, data);
      
    }
    return root;
}
void inOrderTraversal(Node* root,vector<int>& v){
    if(root){
        inOrderTraversal(root->left,v);
        v.push_back(root->data);
        inOrderTraversal(root->right,v);
    }
}

void inOrder(Node* root){
    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
  
  
  void leftTraversal(Node* root,vector<int>& v){
       if(root==NULL || (root->left==NULL and root->right==NULL)){
           return;
       }
       v.push_back(root->data);
       if(root->left){
           leftTraversal(root->left,v);
       }
       else{
           leftTraversal(root->right,v);
       }
   }
   
   void rootTraversal(Node* root,vector<int>& v){
       if(root==NULL){
           return;
       }
       if(root->left==NULL and root->right==NULL){
           v.push_back(root->data);
           return;
       }
       rootTraversal(root->left,v);
       rootTraversal(root->right,v);
   }
    void rightTraversal(Node* root,vector<int>& v){
       if(root==NULL || (root->left==NULL and root->right==NULL)){
           return;
       }
       if(root->right){
           rightTraversal(root->right,v);
       }
       else {
           rightTraversal(root->left,v);
       }
       v.push_back(root->data);
   }

 
    vector <int> boundary(Node *root)
    {
        vector<int>v;
        if(root==NULL){
            return v;
        }
        v.push_back(root->data);
        leftTraversal(root->left,v);
        rootTraversal(root->left,v);
        rootTraversal(root->right,v);
        rightTraversal(root->right,v);
        
        return v;
    }

    int main(){
    Node* root = NULL;
     root=createBST(root);  
     vector<int> ans=boundary(root);
     for (int i = 0; i < ans.size(); i++)
     {
        cout<<ans[i]<<" ";
     }
     
   
    
    
   
 
    return 0;
}