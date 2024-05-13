#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int s =0, e = size-1;
    int mid = (s + e)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int s =0, e = size-1;
    int mid = (s + e)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return ans;
}
int main(){
	int even[5] = {2,3,5,5,5};
	cout<<"the first occ. of 5 at index"<<firstOcc(even,5,5)<<endl;
	cout<<"the last occ. of 5 at index"<<lastOcc(even,5,5)<<endl;
	return 0;
}
