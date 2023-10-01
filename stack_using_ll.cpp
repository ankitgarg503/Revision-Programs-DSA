#include<iostream>
using namespace std;

struct Node {

    int data;
    Node* next;
};

Node* top = NULL;

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
        if (top == NULL) {
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

    Node* push(int data) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return top;
        }
        else {
            Node* newNode = createNode(data);
            newNode->next = top;
            top = newNode;
            return top;
        }
    }

    int pop(void) {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        else {
            Node* temp = top;
            int data = temp->data;
            top = top->next;
            delete temp;
            return data;
        }
    }
  int topElement(void){
    return top->data;
  }
  int bottomElement(void){
    Node* temp = top;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
    
  }


int main() {
    int p=isEmpty();
    if(p){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack is not empty!"<<endl;
    }
    top=push(23);
    top=push(25);
    top=push(27);
    Node* temp=top;
    linkedListTraversal(temp);
    // cout<<endl<<pop();
    cout<<endl<<topElement();
    cout<<endl<<bottomElement();
        
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
