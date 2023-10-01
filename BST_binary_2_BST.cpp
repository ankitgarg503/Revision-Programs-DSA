#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};




Node* createNode(int data){
    Node*node=(Node*)malloc(sizeof(Node));
    node->data = data;
    node->left=NULL;
    node->right=NULL;
    return node;
}


void inOrderTraversal2(Node* root){
    if(root){
       
        inOrderTraversal2(root->left);
         cout<<"Element="<<root->data<<endl;
        inOrderTraversal2(root->right);
    }
}


 int ISBST(Node* root){
    static Node*prev=NULL;
    if(root){
        if(!ISBST(root->left)){
            return 0;
        }
        else if(prev!=NULL && root->data<=prev->data){
            return 0;

        }
        prev=root;
       return  ISBST(root->right);
    }
    return 1;
 }
 int ISBST2(Node* root, int min, int max) {
    if (root == NULL)
        return 1;

    if (root->data <= min or root->data >= max) {
        return 0;
    }
    return ISBST2(root->left, min, root->data) and ISBST2(root->right, root->data, max);
}


 vector<int> v;
    int i=0;
    
     void inOrderTraversal(Node* root,vector<int>& v){
     if(root){
         inOrderTraversal(root->left,v);
         v.push_back(root->data);
         inOrderTraversal(root->right,v);
     }
   }
   
   void buildBST(Node* root){
       if(root==NULL){
           return;
       }
       buildBST(root->left);
       root->data=v[i];
       i++;
       buildBST(root->right);
   }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        inOrderTraversal(root,v);
        sort(v.begin(),v.end());
         buildBST(root);
         return root;
        
    }




int main(){
    Node *root=createNode(5);    
    Node *first=createNode(4);    
    Node *second=createNode(9);    
    Node *third=createNode(355);    
    Node *fourth=createNode(86);
    root->left=first;
    root->right=second;
    first->left=third;
    first->right=NULL;
    second->left=fourth;
    second->right=NULL; 
    third->left=NULL;
    third->right=NULL;   
    fourth->left=NULL;
    fourth->right=NULL;   

     root=binaryTreeToBST(root);
    
    cout<<"\n";
    if(ISBST(root)){
        cout<<"Given Tree is a BST";
    }
    else{
        cout<<"Given Tree is not a BST";
    }
    cout<<"--------------------------------  --------------------------------"<<endl;
    if(ISBST2(root,-99999,99999)){
        cout<<"Given Tree is a BST";
    }
    else{
        cout<<"Given Tree is not a BST";
    }
    cout<<"\n";
     inOrderTraversal2(root); cout<<endl<<endl;
    // fourth->right=NULL;   
    // preOrderTraversal(root); cout<<endl<<endl;
    // fourth->right=NULL;   
    // postOrderTraversal(root); 
    return 0;
} 
 
 