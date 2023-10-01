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

void preOrderTraversal(Node* root,vector<int>& v){
    if(root){
        v.push_back(root->data);
        preOrderTraversal(root->left,v);
        preOrderTraversal(root->right,v);
    }
}
void postOrderTraversal(Node* root,vector<int>& v){
    if(root){
        postOrderTraversal(root->left,v);
        postOrderTraversal(root->right,v);
        v.push_back(root->data);
    }
}

void inOrder(Node* root){
    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

 void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    
 }

 Node* insertionBST(Node* root,int data){
   if (!root) {
            return new Node(data);
        }
        
        if (data < root->data) {
            root->left = insertionBST(root->left, data);
        } else {
            root->right = insertionBST(root->right, data);
        }
        
        return root;   
 }

int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    // inOrder(root);
  insertionBST(root,100);
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
   preOrderTraversal(root,v1);
   inOrderTraversal(root,v2);
   postOrderTraversal(root,v3);
  print(v1);
  print(v2);
  print(v3);
 
    return 0;
}