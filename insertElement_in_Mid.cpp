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
 
 Node *createLinkedlist(int arr[], int index, int size)
 {
 	if(index == size)
 	   return NULL;
 	   
 	Node *temp;
	temp = new Node(arr[index]);
	temp->next = createLinkedlist(arr,index+1,size);
	return temp;  
 }
 
 int main(){
 	Node *head = NULL;
 	int arr[] = {2,4,5,7,9};
 	head = createLinkedlist(arr,0,5);
 	
 	//Insert node at a particular position
 	int x = 3;  //insertion position..
 	int value = 12;
 	
 	Node *temp = head;
 	x--;
 	while(x--){
 		temp = temp->next;
	 }
	Node *temp2 = new Node(value);
	temp2->next = temp->next;
	temp->next = temp2;
	
	//print the list..
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	} 
	 
 }
 
