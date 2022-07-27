#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) 
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

bool binarySearch(int *arr, int start, int end , int k ) {

    //base case

    //element not found
    if(start>end)
        return false;

    int mid = start + (end-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, end, k);
    }
    else{
        return binarySearch(arr, start, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}
