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

   struct Node *reverse (struct Node *head, int k)
    { 
        if(head==NULL){
            return NULL;
        }
        Node* prev=NULL;
        Node* nextNode=NULL;
        Node* curr=head;
        int count=0;
        
        while(curr!=NULL and count<k){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            count++;
        }
        
        if(nextNode){
            head->next=reverse(nextNode,k);
        }
        return prev;
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
    nine->next=NULL;
    
    linkedListTraversal(head);
    head=reverse(head,2);
    linkedListTraversal(head);
    
    return 0;
}
