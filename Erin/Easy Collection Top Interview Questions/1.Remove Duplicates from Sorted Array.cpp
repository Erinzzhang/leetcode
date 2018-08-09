/* 
Array
File:  Remove Duplicates from Sorted Array.cpp

Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

- In-place algo.
- O(1) space

creation Date: 07/08/2018
copyright(c) 2018 Ya-Han Chang
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
        {
            if(i + 1 < nums.size() && nums[i] == nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        return nums.size();
    }
};
