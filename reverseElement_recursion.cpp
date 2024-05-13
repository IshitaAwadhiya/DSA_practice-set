#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node *next;
  Node(int value){
    data = value;
    next = NULL;
  }
};
Node *createLinkedList(int arr[], int index, int size, Node *prev)
{
    if(index == size)
        return prev;
   
   Node *tail;
   tail = new Node(arr[index]);
   tail->next = prev;
   return createLinkedList(arr,index+1,size,tail);
}

int main(){
    Node *head = NULL;
    int arr[] = {3,2,5,9,7};
    head = createLinkedList(arr,0,5,NULL);

    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}