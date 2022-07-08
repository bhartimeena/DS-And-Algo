// something is not right with this code!!!!!!!!!!

#include <bits/stdc++.h>
using namespace std;

// implementation of node
class Node
{
public:
    int data; // data
    Node* next; // pointer which pint the next node of the link list
    Node* head;

    // constructer
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    // destructer
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            // memory free
            delete next;
            this->next = NULL;
        }
        cout<<" memory is free for node with data" << value <<endl;
    }

};

// insert the element at head of the linked list
void insertatHead(Node* &head, int d){
    // new node creationn
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertatTail(Node* &tail, int d){
    // new node creationn
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;

    }
    cout<<endl;

}

void insertAtPosition(Node* &tail,Node* &head,int position ,int d){
    
    //insert at  start or the first position
    if(position==1){
        insertatHead(head,d);
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
        insertatTail(tail,d);
        return;

    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp ->next;
    temp -> next = nodeToInsert; 
}

void deleteNode(int position, Node* &head){
    //delete first or starting node
    if(position==1){
        Node* temp = head;
        head = head->next;

        // memory free start node
        delete temp;


    }else{
        // delete any middle or last node 
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        }
}




int main()
{
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    cout << node1->head << endl;

    // head poiinterd to node1
    Node* head = node1;
    Node* tail = node1;
    // print(head);
    print(head);
    // insertatHead(head,12);
    insertatTail(tail,12);
    print(head);
    // insertatHead(head,15);
    insertatTail(tail,15);
    print(head);
    insertAtPosition(tail,head,3,22);

    print(head);
    insertAtPosition(tail,head,1,22);
    print(head);
    
    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data <<endl;

    deleteNode(1,head);
    print(head);


    return (0);
}