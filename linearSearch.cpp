	#include<iostream>
	using namespace std;
	
	bool Search(int arr[], int size, int key){
		for(int i=0; i<size; i++){
			if(arr[i] == key){
				return 1;
			}
		}
		return 0;
	};
 
    int main(){
    	int arr[] = {3,1,6,9,2,4,7};
    	int key;
    	cout<<"Enter the Element search for:";
    	cin>>key;
    	bool found = Search(arr,7,key);
    	
    	if(found)
		{
    		cout<<"Element is present..";
		}
		else
		{
			cout<<"Element is not present..";
		}
		
		return 0;
	}