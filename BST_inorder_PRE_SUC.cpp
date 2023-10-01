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

int inOrderSucc(Node* root,int data){
    if(root==NULL){
        return -1;
    }
    Node* suc=NULL;
    while (root)
    {
        if(root->data<=data){
            root = root->right;
        }
        else{
            suc=root;
            root = root->left;
        }
    }
    if(suc)
    return suc->data;

    else{
        return -1;
    }

}
int inOrderPre(Node* root,int data){
    if(root==NULL){
        return -1;
    }
    Node* pre=NULL;
    while (root)
    {
        if(root->data>=data){
            root = root->left;
        }
        else{
            pre=root;
            root = root->right;
        }
    }
    if(pre)
    return pre->data;

    else{
        return -1;
    }

}


int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    // inOrder(root);

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
   preOrderTraversal(root,v1);
   inOrderTraversal(root,v2);
   postOrderTraversal(root,v3);
  print(v1);
  print(v2);
  print(v3);

  cout<<inOrderSucc(root,11); cout<<endl;
  cout<<inOrderPre(root,11);
 
    return 0;
}