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

void leftView(Node* root,int level,vector<int>& v){
      if(root==NULL){
        return;
      }
      if(level==v.size()){
        v.push_back(root->data);
      }
      leftView(root->left,level+1,v);
      leftView(root->right,level+1,v);
}

 
 
 
 bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
      if(root1 ==NULL and root2==NULL){
          return true;
      }
      else if((root1==NULL and root2!=NULL ) || (root2==NULL and root1!=NULL )){
          return false;
      }
      if(root1->data!=root2->data ){
          return false;
      }
      
      bool left=isIsomorphic(root1->left,root2->left) and isIsomorphic(root1->right,root2->right);
      bool right=isIsomorphic(root1->left,root2->right) and isIsomorphic(root1->right,root2->left);
      
      if(left || right){
          return true;
      }
      else{
          return false;
      }
      
    }

int main(){
    Node* root1 = NULL;
     root1=createBST(root1);  
    Node* root2 = NULL;
     root2=createBST(root2);  
   
    inOrder(root1);cout<<endl;
    inOrder(root2);
     vector<int> v;
    //  leftView(root1,0,v);
    //  cout<<endl;
    //  for (int i = 0; i <v.size(); i++)
    //  {
    //      cout<<v[i]<<" ";
    //  }
     cout<<endl;
    cout<<isIsomorphic(root1,root2)<<endl;
   
 
    return 0;
} 
 
 