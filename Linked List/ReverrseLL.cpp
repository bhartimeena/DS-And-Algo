#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};
Node* reverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr = head;
    Node* forward=NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        /* code */
    }
    return prev;
    
}



int main(){
    class Node *head = NULL;
    
    return 0;
    


}