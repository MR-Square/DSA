#include<iostream>
using namespace std;

/**
 * @brief binarySearch() is a function which search the key element in the given array.
 * If it is present in the array, then it returns the index otherwise it returns -1.
 * TC: O(logn)
 * @param arr is used to store the input array.
 * @param size  is used to store the size of array.
 * @param key  is used to store the key element(which we need to search in array.)
 * @return the index.
 */

int binarySearch(int arr[],int size,int key){
    int start = 0, end = size - 1, mid;

    while(start <= end){
        // calculating mid point.
        mid = start + (end - start) / 2;
        /*
            This is same as mid = (start + end) / 2.
            This is for the case when array.size() is equal to INT_MAX
        */

       if(arr[mid] == key){
            return mid;
       }
       else if(arr[mid] < key){
        start = mid + 1;
       }
       else{
        end = mid - 1;
       }
    }

    return -1;
}

int main(){
    int arr[100],size,key;

    cout << "Enter he size of array:";
    cin >> size;

    cout << "Enter the elements of aray:";
    for(int i = 0; i < size; i++)
    cin >> arr[i];

    cout << "Enter the key element:";
    cin >> key;

    int ans = binarySearch(arr,size,key);

    if(ans == -1)
    cout << "Key is not present in the array." << endl;
    else
    cout << "Key is present at index " << ans << endl;

    return 0;
}