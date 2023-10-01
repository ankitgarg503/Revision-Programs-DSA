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
        inOrderTraversal(root->left);
          cout<<root->data<<" ";
        inOrderTraversal(root->right);
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

bool searchBST(Node* root,int data){
    if(root==NULL)
        return false;

    if(root->data==data)
        return true;
    if(root->data>data)
        return searchBST(root->left,data);
    if(root->data<data)
        return searchBST(root->right,data);        
}

Node* createNode(int data){
   Node* newNode = (Node*)malloc(sizeof(Node));
   newNode->data = data;
   newNode->left=NULL;
   newNode->right=NULL;
   return newNode;

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
 
    // cout<<"Pre Order traversal\n";
    // preOrderTraversal(root); 
    // cout<<"Post-order traversal\n";
    // postOrderTraversal(root); 
     cout<<"IN Order traversal\n";
    inOrderTraversal(root); 
    cout<<searchBST(root,3);

    return 0;
}

