/* 
Array
File: Contains Duplicate.cpp

Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, 
and it should return false if every element is distinct.

- sort

creation Date: 10/08/2018
copyright(c) 2018 Ya-Han Chang
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            for(int i = 0; i < nums.size(); i ++)
            {
                if(i + 1 < nums.size() && nums[i] == nums[i+1])
                {
                    return true;
                }
            }
            return false;
    }
};
