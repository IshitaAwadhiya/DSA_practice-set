/*#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,7,5,1,9,2};
    for(int i=4; i>=0; i--){
    for(int j=0; j<=i; j++){
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}*/

#include<iostream>
using namespace std;
 
 int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of an Array:";
    cin>>n;
    cout<<"The elements of an Array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=n-1; j++)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }