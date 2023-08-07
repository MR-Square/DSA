/*
 * i/p => 1,2,3,4,5,6
 * o/p => 2,1,4,3,6,5
*/

#include<iostream>
using namespace std;

void alterSwap(int arr[],int size){
    int j,k,temp;
    j = 0;
    k = j + 1;

    while(k < size){
        temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
        j += 2;
        k += 2;
    }

    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";

    return;
}

int main(){
    int arr[100],size;

    cout << "Enter the size of array::";
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    alterSwap(arr,size);

    return 0;
}