/**
 * @file 852.cpp
 * @author Mohd Raza Shaikh
 * @brief As we know that array we always be mountained.
        So we can consider it as two sub-arrays.
        first array from arr[0] to arr[i] and is sorted in increasing order.
        second array from arr[i] to arr[size - 1] and is sorted in decreasing order.
        That means we can apply binary search on it. So the TC will be O(log(N))
 * @date 2023-07-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size(), mid,ans;

        while(start < end){

            mid = start + (end - start) / 2;
            
            if(arr[mid] < arr[mid + 1]){
                start = mid + 1;
                ans = mid + 1;
            }
            else if(arr[mid] < arr[mid - 1]){
                end = mid - 1;
                ans = mid - 1;
            }
            else{
                return mid;
            }
        }

        return ans;
    }
};