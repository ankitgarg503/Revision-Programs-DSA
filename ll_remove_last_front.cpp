#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};


Node*  moveToFront(Node* head) {

  if(head==NULL or head->next==NULL){
      return head;
  }


   Node* temp=head;
   Node* temp1=head->next;
   while(temp1->next!=NULL){
       temp=temp->next;
       temp1=temp1->next;
   }
   temp->next=NULL;
   temp1->next=head;
   head=temp1;
   return head;
 
}

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
    fourth= createNode(15) ;
    fifth= createNode(15) ;
    sixth= createNode(15) ;
    seventh= createNode(15) ;
    eight= createNode(15) ;
    nine= createNode(15) ;
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
    head=moveToFront(head);
    linkedListTraversal(head);
    
    return 0;
}