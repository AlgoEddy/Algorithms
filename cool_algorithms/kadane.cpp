/*
Kadane's algorithm lets you find the largest contiguous subarray of an array
in O(n) time and O(1) space.
*/

#include <bits/stdc++.h>

using namespace std;

class Kadane {
public:
    static int maxSubArray(vector<int> nums) {
        if (nums.size() == 0) {           
            return INT_MIN;
        }
        
        if (nums.size() == 1) {
            return nums[0];
        }
        
        int currentSubarray = nums[0];
        int maxSubarray = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            int num = nums[i];
            currentSubarray = max(num, currentSubarray + num);
            maxSubarray = max(maxSubarray, currentSubarray);
        }
        
        return maxSubarray;
    }
};

// Kadane().maxSubArray({ 1, 2, 3, -3 });
// > 6