#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,5,7,9,12};
    int odd[5] = {3,5,8,10,13};

    int evenIndex = binarySearch(even,6,9);
    cout<<"Index of 9 is:"<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,5);
    cout<<"Index of 5 is:"<<oddIndex<<endl;
}