/**
 * @file 231.cpp
 * @author Mohd Raza Shaikh
 * @brief If a number is a power of 2 then its binary form will contain only single
            set bit(1).
            e.g: 
            8 (base 10) = 1000 (base 2)
            binary form of 8 contains single set bit & 2^3 = 8.Therefore we'll return true
            6 (base 10) = 0110 (base 2)
            binary of 6 contains 2 set bits & it isn't a power of 2. Therefore ans is false.
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int last_bit,count = 0;

        // if n is a negative number or zero.
        if(n <= 0)
        return false;
        
        // If n is a positive number
        while(n != 0){
            last_bit = n & 1;
            n = n >> 1;

            if(last_bit)
            count++;
        }
        
        if(count == 1)
        return true;

        return false;
    }
};
