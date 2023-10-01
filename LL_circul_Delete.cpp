#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};


Node* deleteNode(Node * head,int key){
       if(head==NULL){
        return NULL;
       }
       Node* temp=head;
       Node* del;
       Node* prev=NULL;
       Node* last=head;
    //    Node*l =NULL;
       while(last->next!=head){
        
        last=last->next;
       }
    //    cout<<last->data<<endl;
       while(temp->data!=key and temp->next!=head){
        prev=temp;
        temp=temp->next;
       }
       if(temp==last){
        prev->next=head;
        free(last);
        return head;
       }
       if(temp->next==head){
        return head;
       }
       if(temp==head){
         head=temp->next;
         last->next=head;
         free(temp);
         return head;
       }
       prev->next=temp->next;
       free(temp);
       return head;
      
}

// void linkedListTraversal(struct Node * ptr){
//     Node* temp=ptr;
//     do{
//         cout<<temp->data<<"--> ";
//         temp=temp->next;
//     }while(temp!=ptr);
//     cout<<"X"<<endl;
// }
struct Node *createNode(int data){
     struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
     newNode->data=data;
     newNode->next=NULL;
     return newNode;
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
    
    head=   createNode(15);
    first=createNode(12);
    second=createNode(12);
    third=createNode(15);
    fourth= createNode(16) ;
    fifth= createNode(15) ;
    sixth= createNode(15) ;
    seventh= createNode(19) ;
    eight= createNode(15) ;
    nine= createNode(11) ;
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
    nine->next=head;
    
   // linkedListTraversal(head);
    head=deleteNode(head,19);
     //linkedListTraversal(head);
    
    return 0;
}