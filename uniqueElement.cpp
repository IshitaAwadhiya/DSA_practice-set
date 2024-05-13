#include<iostream>
using namespace std;

void find_unique(int arr[], int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];    // using XOR..
    }
    cout<<ans<<" ";
}

int main(){
    int arr[] = {3,4,3,2,4,2,1};
    find_unique(arr,7);
}