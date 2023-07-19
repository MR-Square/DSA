#include<iostream>
using namespace std;

void selecSort(int arr[],int size){
    int minInd;
    // cout << "min = " << min << endl;

    for(int i = 0; i < size - 1; i++){
        minInd = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minInd])
            minInd = j;
        }
        swap(arr[minInd],arr[i]);
    }

    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

int main(){
    int arr[100],size;

    cout << "size = ";
    cin >> size;

    cout << "arr = ";
    for(int i =0 ; i < size;i++)
    cin >> arr[i];

    selecSort(arr,size);
    return 0;
}
