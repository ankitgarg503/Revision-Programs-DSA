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

void levelOrderTraversal(Node* root){
     
      queue<Node*>q;
      q.push(root);
      while (!q.empty())
      {
         Node* temp=q.front();
         cout<<temp->data<<" ";
         q.pop();
         if(temp->left){
            q.push(temp->left);
         }
         if(temp->right){
            q.push(temp->right);
         }
      }
      


}

 vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
         if (root == nullptr) {
              return result;
         }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();

            level.push_back(temp->data);

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }

        result.push_back(level);
    }
        return result;
    }

int main(){
    Node* root = NULL;
     root=createBST(root);  
   
    // inOrder(root);
    // cout<<endl;
    // levelOrderTraversal(root);
    vector<vector<int>> ans;
    ans=levelOrder(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[1].size(); j++)
        {
             cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
        
    }
    
 
    return 0;
}