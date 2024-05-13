#include<iostream>
#include<array>
using namespace std;

int main(){
    //int basic[3] = {1,2,3};
    array<int,5>a={1,2,3,4,5};  //this is standard template library (STL) of array....

    int size = a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index->"<<a.at(2)<<endl;
    cout<<"Empty or not->"<<a.empty()<<endl;   // it return boolean value...
    cout<<"First element->"<<a.front()<<endl;
    cout<<"Last element->"<<a.back()<<endl;
}