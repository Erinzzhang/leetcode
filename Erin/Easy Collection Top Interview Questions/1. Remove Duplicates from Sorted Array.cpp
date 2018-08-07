/* 
Array
Date: 20180807
- In-place algo.
- O(1) space
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp;
        for (int i = 0; i < nums.size(); i++)
        {
            temp = nums[i];
            if(i + 1 < nums.size() && temp == nums[i+1])
            {
                nums.erase(nums.begin()+i);;
                i--;
            }
        }
        return nums.size();
    }
};
