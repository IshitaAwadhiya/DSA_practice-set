#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char string[6][100] = {"ishita", "nivedita","anchal", "anuja","fardeen","shrajan"};
    int length = 6;
    for(int i=0; i<(length-1); i++){
        int minIndex = i;
        for(int j=i+1; j<length; j++){
            if(strcmp(string[j], string[minIndex])<0)
            minIndex = j;
        }
        swap(string[i],string[minIndex]);
    }
    for(int i=0; i<length; i++){
        cout<<string[i]<<", ";
    }
    
    
}