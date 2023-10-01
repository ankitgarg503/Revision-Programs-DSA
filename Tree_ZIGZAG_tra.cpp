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

void  ZIGZAGTraversal(Node* root, vector<int>& v){
     
     
      queue<Node*>q;
      q.push(root);
      int count=0;
      while (!q.empty())
      {
                vector<int> tp;
                int p=q.size();
         for(int i=0; i<p;i++){
                Node* temp=q.front();
                q.pop();
                tp.push_back(temp->data);

            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }

         }
            if(count%2!=0){
                reverse(tp.begin(), tp.end());   
            }
            for(int i=0; i<tp.size(); i++){
                v.push_back(tp[i]);
            }
            count++;
      }
    
    

}
int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    inOrder(root);
    cout<<endl;
     vector<int>v;
    ZIGZAGTraversal(root,v);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
   
 
    return 0;
}