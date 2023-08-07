#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSortedArray(vector<int> &a, vector<int> &b, int m, int n){
    vector<int> c;
    int i = 0, j = 0;

    while(i < a.size() || j < b.size()){
        if(a[i] <= b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while(i < a.size())
    c.push_back(a[i]);

    while(j < b.size())
    c.push_back(b[j]);

    return c;
}

int main(){
    vector<int> a,b;
    int m,n,temp;

    cout << "Enter the size of a:";
    cin >> m;
    cout << "Enter the elements of a: ";
    for(int i = 0; i < m; i++){
        cin >> temp;
        a.push_back(temp);
    }

    cout << "Enter the size of b: ";
    cin >> n;
    cout << "Enter the elements of b: ";
    for(int i = 0; i < n; i++){
        cin >> temp;
        b.push_back(temp);
    }

    vector<int> ans = mergeSortedArray(a,b,m,n);
    for(int i:ans)
    cout << i << " ";

    return 0;
}