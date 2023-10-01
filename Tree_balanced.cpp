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
int height(Node*  root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int t_heght=max(left,right) +1;
    return t_heght;
}

bool isBalancedBT(Node* root) {
    // Write your code here.
       if(root==NULL){
           return true;
       }
     bool left=isBalancedBT(root->left);
     bool right=isBalancedBT(root->right);
     bool h8=abs(height(root->left) -height(root->right))<=1;

    if(left and right and h8){
        return true;
    }
    else{
       return false; 
    }

}

int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    inOrder(root);

    bool p=isBalancedBT(root);
    if(p){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not balanced tree"<<endl;
    }
   
 
    return 0;
}