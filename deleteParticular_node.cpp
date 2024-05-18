#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next =NULL;
    }
};

Node* createLinkedlist(int arr[], int index, int size){
    if(index == size)
    return NULL;

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedlist(arr,index+1,size);
    return temp;
}

int main(){
    Node* head = NULL;
    int arr[] = {2,5,3,8,7,1};
    int x = 3;
    head = createLinkedlist(arr,0,6);

    if(x == 1){
        delete head;
        head = NULL;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        x--;
        while(x--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}