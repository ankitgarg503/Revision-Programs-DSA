#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};


void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
      Node* slow=head;
      Node* fast=head->next;
      Node* temp3=NULL;
      Node* temp4=NULL;
      Node* ptr=head;
     while( fast!=head && fast->next!=head){
          slow=slow->next;
          fast=fast->next;
          fast=fast->next;
      }
      *head1_ref=head;
      *head2_ref=slow->next;
       slow->next=head;
       
       temp3=*head2_ref;
       while(temp3->next!=head){
           temp3=temp3->next;
       }
       temp3->next=*head2_ref;
       
      
}




void linkedListTraversal(struct Node * ptr){
    Node* temp=ptr;
    do{
        cout<<temp->data<<"--> ";
        temp=temp->next;
    }while(temp!=ptr);
    cout<<"X"<<endl;
}
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
    
    head=   createNode(5);
    first=createNode(12);
    second=createNode(12);
    third=createNode(15);
    fourth= createNode(105) ;
    fifth= createNode(15) ;
    sixth= createNode(15) ;
    seventh= createNode(75) ;
    eight= createNode(15) ;
    nine= createNode(95) ;
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
    
    Node* center=NULL;
    Node* start=NULL;
    linkedListTraversal(head);
     splitList(head,&start,&center);
     linkedListTraversal(start);
     linkedListTraversal(center);
    
    return 0;
}
