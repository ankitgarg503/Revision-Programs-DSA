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

void rightView(Node* root,int level,vector<int>& v){
      if(root==NULL){
        return;
      }
      if(level==v.size()){
        v.push_back(root->data);
      }
      rightView(root->right,level+1,v);
      rightView(root->left,level+1,v);
}

int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    inOrder(root);
     vector<int> v;
     rightView(root,0,v);
     cout<<endl;
     for (int i = 0; i <v.size(); i++)
     {
         cout<<v[i]<<" ";
     }
     
    
   
 
    return 0;
}