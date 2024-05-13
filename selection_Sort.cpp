/*#include<iostream>
using namespace std;
 int main(){
    int arr[] = {3,5,2,4,8,1};
    for(int i=0; i<5; i++){
        int min_index = i;
        for(int j=i+1; j<6; j++){
            if(arr[j]<arr[min_index])
            min_index = j;
        }
        swap(arr[i],arr[min_index]);
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }*/

 //using user input...
 
#include <iostream>
using namespace std;
int main() {
   int arr[100];
   int n;
   cout<<"Enter the size of the array:";
   cin>>n;
   cout<<"The elements of an array";
   for(int i=0; i<n; i++)
    cin>>arr[i];
   
   for(int i=0; i<(n-1); i++){
       int minIndex = i;
       for(int j=i+1; j<n; j++){
           if(arr[j]<arr[minIndex])
           minIndex = j;
       }
       swap(arr[i],arr[minIndex]);
       
   }
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}