//something wrong here again

#include<bits/stdc++.h>
using namespace std;

// implementation of node
class Node
{
public:
    int data; // data
    Node* next; // pointer which pint the next node of the link list
    Node* prev;

    // constructer
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

//traversing a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;

    }
    cout<<endl;

}

//print the length of the linked list
int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;

    }
    return len;

}

void insertAtHead(Node* &tail,Node* &head,int d){
    if(head== NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{
        Node* temp = new Node(d);
    temp-> next = head;
    head -> prev = temp;
    head = temp;

    }

}

void insertAtTail(Node* &head,Node* tail,int d){

    if(tail== NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
}
    else{
        Node* temp = new Node(d);
    tail -> next = temp;
    temp->prev = tail;
    tail = temp;
    }

}

void insertAtPosition(Node* &tail,Node* &head,int position ,int d){

    //insert at  start or the first position
    if(position==1){
        insertAtHead(tail,head,d);
        return;
    }
    // if(len == position-1){
    //     insertatTail(tail,d);
    // }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;

    }
    // insert at the last position
    if(temp-> next == NULL){
        insertAtTail(head,tail,d);
        return;

    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp ->next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

int main(){
    // Node* node1 = new Node(10);
      // head poiinterd to node1
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<getlength(head)<<endl;

    insertAtHead(tail,head,12);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;
    insertAtHead(tail,head,22);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    insertAtTail(tail,head,25);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    insertAtPosition(tail,head,2,100);
    print(head);
    cout<<" head "<<head -> data<<endl;
    cout<<" tail "<<tail -> data<<endl;
    insertAtPosition(tail,head,1,200);
    print(head);

    cout<<" head "<<head -> data<<endl;
    cout<<" tail "<<tail -> data<<endl;
    insertAtPosition(tail,head,6,8800);
    print(head);

}

