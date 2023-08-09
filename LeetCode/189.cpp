/**
 * @file 189.cpp
 * @author Mohd Raza Shaikh
 * @brief Given an integer "nums", rotate the array to the right by "k" steps, where "k"
 *  is non-negative.
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i = 0; i < nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }
};