#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node * createLinkedList(int arr[], int index, int size)
{
    if(index == size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
}
int main()
{
    Node *head = NULL;
    int arr[] = {2,4,7,9,3,8};
    for(int i=0; i<6; i++){
      head = createLinkedList(arr,0,6);
    }
      Node *temp = head;
      while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
      }
    
    return 0;
}