#include<iostream>
using namespace std;

void find_Duplicate(int arr[], int size){
    int ans=0;
    // for XORing all the array....
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    // XORing [1 to n-1]
    for(int i=1; i<size; i++ ){
        ans = ans^i;
    }
    cout<<ans<<" ";
}

int main(){
    int arr[] = {3,6,4,8,1,6};
    find_Duplicate(arr,6);
}