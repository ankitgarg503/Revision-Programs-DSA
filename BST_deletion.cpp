#include<iostream>
#include<stdlib.h>
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
void preOrderTraversal(Node* root){
    if(root){
        cout<<"Element="<<root->data<<endl;
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(Node* root){
    if(root){
        
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<"Element="<<root->data<<endl;
    }
}

void inOrderTraversal(Node* root){
    if(root){
       
        inOrderTraversal(root->left);
         cout<<root->data<<"  ";
        inOrderTraversal(root->right);
    }
}

Node* inorderPredessor(Node* root,int data){
    root=root->left;
    while (root->right!=NULL)
    {
        root=root->right;
    }
 return root;   
 
}

Node* deleteNode(Node* root,int data){
     Node* iPre;
     if (root==NULL){
            return NULL;
     }
     if(root->left==NULL and root->right==NULL){
        free(root);
        return NULL;
     }
     
     if (root->data<data){
         root->right=deleteNode(root->right,data);
     }
     else if (root->data>data){
        root->left=deleteNode(root->left,data);
     }
     else{
        iPre=inorderPredessor(root,data);
        root->data=iPre->data;
       root->left =deleteNode(root->left,iPre->data);
     }
 return root;
}

int main(){
    Node *root=createNode(5);    
    Node *first=createNode(3);    
    Node *second=createNode(7);    
    Node *third=createNode(1);    
    Node *fourth=createNode(20);
    root->left=first;
    root->right=second;
    first->left=third;
    first->right=NULL;
    second->left=NULL;
    second->right=fourth; 
    third->left=NULL;
    third->right=NULL;   
    fourth->left=NULL;
    fourth->right=NULL;   
    inOrderTraversal(root); 

    root=deleteNode(root,5); 
    cout<<endl;
    inOrderTraversal(root); 
    
    return 0;
}