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


Node* detectCycle(Node *head){
	//	Write your code here.
	if(head==NULL or head->next==NULL){
		return NULL;
	}
	Node* slow=head;
	Node* fast=head;

    while(fast!=NULL){
		fast=fast->next;
		if(fast==NULL){
			return NULL;
		}
		fast=fast->next;
		if(fast==NULL){
			return NULL;
		}
		slow=slow->next;
		if(slow==fast){
			return slow;
		}
	}
   return NULL;

}

Node* removeLoop(Node*head,Node* start){
	if(start==NULL or head==NULL){
      return NULL;
	}
	Node* temp=start;
    while(temp->next!=start){
		temp=temp->next;
	}
	temp->next=NULL;
	return head;

}


bool detectAndRemoveCycle(Node* head)
{
      if(head==NULL){
		  return false;
	  }
	  Node* intersectionNode=detectCycle(head);
	  if(intersectionNode==NULL){
		  return false;
	  }
	  Node* start=head;
	  while(start!=intersectionNode){
		  start=start->next;
		  intersectionNode=intersectionNode->next;
	  }
      head=removeLoop(head,start);
	  if(head==NULL){
           return false;
	  }
	  return true;

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
    nine->next=fifth;
    
    // linkedListTraversal(head);
   detectAndRemoveCycle(head);
    linkedListTraversal(head);
    
    return 0;
}
