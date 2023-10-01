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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int t_heght=max(left,right) +1;
    return t_heght;
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftD=diameter(root->left);
    int rightD=diameter(root->right);
    int sum=height(root->left)+height(root->right)+1;
    int maxiD=max(sum,max(leftD,rightD)) ;
    return maxiD;
}

int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    inOrder(root);
     int h8=height(root);
     cout<<"Height of tree ="<<h8<<endl; 
    int d8=diameter(root);
    cout<<"Dimater of Tree ="<<d8<<endl;
    return 0;
}