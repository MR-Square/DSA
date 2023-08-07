#include<iostream>
#include<vector>
using namespace std;

/**
 * @brief Given an array "arr" of integers and a position "m". You have to reverse the 
 * array after that position.
 * @param arr 
 * @param m 
 */

void reverseArray(vector<int> &arr, int m){
    int start = m + 1, end = arr.size() - 1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    return;
}


int main(){
    vector<int> arr;
    int m,temp,temp1;

    cout << "Enter the position:";
    cin >> m;

    cout << "Enter the size of array:";
    cin >> temp;

    cout << "Enter the elements of array:";
    for(int i = 0; i < temp; i++){
        cin >> temp1;
        arr.push_back(temp1);
    }

    reverseArray(arr,m);
    cout << "Reverse Array is as follow:";
    for(int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";

    return 0;
}