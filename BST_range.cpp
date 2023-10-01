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

int countElements(Node* root,int l,int h){
     vector<int> v;
     int count=0;
     inOrderTraversal(root,v);
     for (int i = 0; i < v.size(); i++)
     {
             if(v[i]>l && v[i]<h){
                count++;
             }
     }
     return count;
}

int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    inOrder(root);
  
    int count=countElements(root,3,49);
    cout<<"\nElement between 3 and 49\n";
    cout<<"\n"<<count;
   
 
    return 0;
}