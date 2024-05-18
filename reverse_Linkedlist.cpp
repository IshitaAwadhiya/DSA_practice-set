#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node* createLinkedlist(int arr[], int index, int size){
    if(index == size){
        return NULL;
    }else{
        Node* temp;
        temp = new Node(arr[index]);
        temp->next = createLinkedlist(arr,index+1,size);
        return temp;
    }
}
Node* reverseLinkedlist(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main() {
   Node* head = NULL;
   int arr[] = {3,6,2,8,1};
   head = createLinkedlist(arr,0,5);
   head = reverseLinkedlist(head);
  
   
   Node* temp = head;
   while(temp != NULL){
       cout<<temp->data<<" ";
       temp = temp->next;
   }
   }
    