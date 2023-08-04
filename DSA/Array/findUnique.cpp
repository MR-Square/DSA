/**
 * @file findUnique.cpp
 * @author Mohd Raza Shaikh
 * @brief Finding unique element in an array
 * @version 0.1
 * @date 2023-07-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j])
            count++;
            else if(count >= 2)
            break;
        }
        if(count == 1)
        return arr[i];
    }
    return 0;
}



int main(){
    int arr[100],size;

    cout << "Enter the size of array::";
    cin >> size;

    cout << "Enter the elements of array:" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int ans = uniqueElement(arr,size);
    cout << "ans = " << ans << endl;

    return 0;
}

/*
example:
Enter the size of array::5
Enter the elements of array:
1 2 1 2 3
ans = 3
*/