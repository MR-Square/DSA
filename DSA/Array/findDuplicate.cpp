#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    // first method
    int total=0,sum=0;
    // total is for storing sum of 1 to N, where N is size of array.
    //  sum is for storing sum of all elements in array.

    total = (size*(1+size))/2;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return size-(total-sum);
}

int FindDuplicate(int arr[],int size){
    // second method
    int ans = 0,sum=0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
        // Doing xor of entire array.

        sum = sum ^ i;
        // Doing xor from 1 to N-1, where N is size of array.

    }
    return ans ^ sum;
}

int main(){
    int arr[100],size;

    cout << "Enter the size of arr::";
    cin >> size;

    cout << "Enter the elements of arr" << endl;
    for(int i = 0; i < size; i++)
    cin >> arr[i];

    // int ans = findDuplicate(arr,size);
    int ans = FindDuplicate(arr,size);

    cout << "Duplicate element = " << ans << endl;


    return 0;
}