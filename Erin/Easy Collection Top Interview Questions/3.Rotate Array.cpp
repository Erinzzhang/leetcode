/* 
Array
File: Rotate Array.cpp
Given an array, rotate the array to the right by k steps, where k is non-negative.

Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
Could you do it in-place with O(1) extra space?

- In-place algo.
- O(1) space

creation Date: 09/08/2018
copyright(c) 2018 Ya-Han Chang
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        if(nums.size() > 0)
        {
            for (int times = 0; times < k; times++)
            {
                temp = nums[nums.size() - 1];   
                for (int i = nums.size() - 1; i > 0; i--)
                { 
                    nums[i] = nums[i-1];  
                }
                nums[0] = temp;
            }
        }
    }
};
