/**
 * @file 283.cpp
 * @author Mohd Raza Shaikh
 * @brief Given an integer array "nums", move all 0's to the end of it while maintaining the 
 * relative order of the non-zero elements.
 * NOTE: You must do this in-place without making a copy of the array.
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<vector>
#include<iostream>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size();j++){
            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};


/*
example:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/