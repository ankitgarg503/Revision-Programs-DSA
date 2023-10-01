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
// int maxValue(Node* root){
//     if(root==NULL){
//         return -1;
//     }
//     Node* temp=root;
//     while(temp->right!=NULL){
//         temp=temp->right;
//     }
//     return temp->data;
// }
// int minValue(Node* root){
//     if(root==NULL){
//         return -1;
//     }
//     Node* temp=root;
//     while(temp->left!=NULL){
//         temp=temp->left;
//     }
//     return temp->data;
// }

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

Node* inOrderPredessor(Node* root){
     root=root->left;
     while(root->right){
        root=root->right;
     }
     return root;
}
Node* inOrderSucdessor(Node* root){
     root=root->right;
     while(root->left){
        root=root->left;
     }
     return root;
}
void inOrder(Node* root){
    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

pair<int,int> predecessorSuccessor(Node* root, int key)
{
     pair<int,int>p;
     vector<int>v;
     inOrderTraversal(root,v);
      p=make_pair(-1,-1);
     for(int i=0;i<v.size();i++){
         if(v[i]==key){
             if(i>0){
               p.first=v[i-1];
             }
             if (i<v.size()-1) {
               p.second = v[i + 1];
               return p;
             }
         }
         else if(v[i]<key){
             p.first=v[i];
         }
         else{
             p.second=v[i];
             return p ;
         }
     }
     return p;
}
int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    //  int maxV=maxValue(root);
    //  int minV=minValue(root);
    //  cout<<"\nMax value  "<<maxV;
    //  cout<<"\nMin value  "<<minV<<endl;
    //  cout<<inOrderPredessor(root)->data<<endl;
    //  cout<<inOrderSucdessor(root)->data<<endl;
    inOrder(root);

    pair<int,int>p;
    cout<<endl;
    p=predecessorSuccessor(root,10);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}