#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {3,5,2,7,9};
    int brr[] = {1,0,4,3,7,8};
    reverse(arr,5);
    print(arr,5);
    reverse(brr,6);
    print(brr,6);
}