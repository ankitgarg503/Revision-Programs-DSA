#include<iostream>
using namespace std;

struct Node {

    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;


    Node* createNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

    void linkedListTraversal(Node* head) {
        while (head != NULL) {
            cout << head->data << "  ";
            head = head->next;
        }
    }

    bool isEmpty(void) {
        if (front == NULL) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isFull(void) {
        Node* newNode = createNode(45);
        if (newNode == NULL) {
            return true;
        }
        else {
            delete newNode;
            return false;
        }
    }

    void enQueue(int data) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return ;
        }
        else {
            Node* newNode = createNode(data);
            newNode->next = NULL;
             if(front==NULL){
                front=rear=newNode;
             }
             else{
                rear->next =newNode;
                rear=newNode;
             }
        }
    }

    int deQueue(void) {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        else {
            int data=front->data;
            Node* ptr=front;
           front=front->next;
           free(front);
           return data;
        }
    }
  


int main() {
    int p=isEmpty();
    if(p){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Queue is not empty!"<<endl;
    }
    enQueue(23);
    enQueue(25);
    enQueue(27);
    Node* temp=front;
    linkedListTraversal(temp);
    cout<<endl<<deQueue();
    // cout<<endl<<pop();

        
    // Node* obj;
    // Node* head=obj->createNode(12);
    // Node* first=obj->createNode(15);
    // Node* second=obj->createNode(19);
    // Node* third=obj->createNode(11);
    // Node* fourth=obj->createNode(72);
    // head->next=first;
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=NULL;
    // obj->linkedListTraversal(head);

    return 0;
}
