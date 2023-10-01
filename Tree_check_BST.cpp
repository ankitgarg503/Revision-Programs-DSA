#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    /* data */
};

void preOrderTraversal(Node* root){
        if(root){
            cout<<root->data<<endl;
            preOrderTraversal(root->left);
            preOrderTraversal(root->right);
        }
}
void postOrderTraversal(Node* root){
   
   if(root){
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
void inOrderTraversal(Node* root){
    if(root){
        preOrderTraversal(root->left);
          cout<<root->data<<" ";
        preOrderTraversal(root->right);
    }
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
  
    while(!q.empty()){
        Node* temp=q.front(); //
         cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
Node* createNode(int data){
   Node* newNode = (Node*)malloc(sizeof(Node));
   newNode->data = data;
   newNode->left=NULL;
   newNode->right=NULL;
   return newNode;

}
bool isBST(Node* root,int minValue,int maxValue){
    if(root==NULL)
        return true;
    if(root->data < minValue or root->data > maxValue)    
        return false;

    return ((isBST(root->left,minValue,root->data-1)) and (isBST(root->right,root->data+1,maxValue)));   
}
int main(){
    Node* root=(Node*)malloc(sizeof(Node));
    root->data=5;
    Node* first=createNode(3);      
    Node* second=createNode(6);      
    Node* third=createNode(1);
    root->left=first;
    root->right=second;
    first->left=third;
    
    cout<<isBST(root,-9999999,99999999)<<endl;
    // cout<<"Pre Order traversal\n";
    // preOrderTraversal(root); 
    // cout<<"Post-order traversal\n";
    // postOrderTraversal(root); 
    cout<<"IN Order traversal\n";
    inOrderTraversal(root); 
    cout<<"Level Order traversal\n";
    levelOrderTraversal(root); 
    return 0;
}

