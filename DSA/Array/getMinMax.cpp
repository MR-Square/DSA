/**
 * @file getMinMax.cpp
 * @author Mohd Raza Shaikh
 * @brief  By using this program you will get the smallest and the largest element in an array.
 * TC: O(n) 
 * @date 2023-07-26
 */
#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min)
        min = arr[i];
    }
    return min;
}

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    return max;
}


int main(){
    int arr[100],size,max_element,min_element;

    cout << "Enter the size of array:";
    cin >> size;
    
    cout << "Enter the values:" << endl;
    for(int i = 0; i < size;i++){
        cin >> arr[i];
    }

    max_element = getMax(arr,size);
    min_element = getMin(arr,size);
    
    cout << "smallest element:" << min_element << endl;
    cout << "largest element:" << max_element << endl;
    return 0;
}