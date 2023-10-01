#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};



void linkedListTraversal(struct Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"-->";
        ptr=ptr->next;
    }
    cout<<"X"<<endl;
}
struct Node *createNode(int data){
     struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
     newNode->data=data;
     newNode->next=NULL;
     return newNode;
}

Node* merge(Node* left,Node* right){

    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    Node* newNode=createNode(-1);
    Node* temp=newNode;
    while (left!=NULL and right!=NULL) 
    {
        if(left->data<=right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;

        }
    }
    while (left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
    }
    while (right!=NULL)
    {
            temp->next=right;
            temp=right;
            right=right->next;
    }
    newNode=newNode->next;
    return newNode;
    
    
}

Node* middle(Node * head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

    }
    return slow; 
}

Node* mergeSort(Node * head){
        
        if(head==NULL or head->next==NULL){
            return head;
        }
        Node* left=head;
        Node* mid=middle(head);
        Node* right=mid->next;
        mid->next=NULL;
        left= mergeSort(left);
        right=mergeSort( right);
        Node* ans=merge(left,right);
        return ans;

}





int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eight;
    struct Node *nine;
    
    head=   createNode(5);
    first=createNode(127);
    second=createNode(12);
    third=createNode(15);
    fourth= createNode(5) ;
    fifth= createNode(67) ;
    sixth= createNode(33) ;
    seventh= createNode(3) ;
    eight= createNode(4) ;
    nine= createNode(7) ;
     head->next=first;
    // first->data=22;
    first->next=second;
    // second->data=32;
    second->next=third;
    // third->data=12;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=nine;
    nine->next=NULL;
    
    linkedListTraversal(head);
     head=mergeSort(head);
    linkedListTraversal(head);
   
    return 0;
}