#include<iostream>
using namespace std;
/**
 * @brief linearSearch() is a function which search a key value in an array.
 * If it is present then it returns the index, otherwise it returns -1.
 * TC: O(n)
 * @param arr is array used to stores the integers.
 * @param size is used to stores the size of array.
 * @param key is a key which needs to find in array.
 * @return the index.
 */
int linearSearch(int arr[],int size,int key){

    // searching key in an array.
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
        return i;
    }
    // if key is not present.
    return -1;
}
int main(){
    int arr[1000],size,key;

    cout << "Enter the size of array:";
    cin >> size;

    for(int i = 0; i < size; i++)
    cin >> arr[i];

    cout << "Enter the key:";
    cin >> key;

    int index = linearSearch(arr,size,key);

    if(index == -1)
    cout << key << " is not present" << endl;

    else
    cout << key << " is present at index " << index << endl;
    return 0;
}

/*
some example:
I:
Enter the size of array:5
1 2 3 4 5
Enter the key:5
5 is present at index 4

II:
Enter the size of array:6
-1 0 3 -6 5 0
Enter the key:2
2 is not presen

III:
Enter the size of array:5
0 2 3 0 1
Enter the key:0
0 is present at index 0
*/