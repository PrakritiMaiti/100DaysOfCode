/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
     for (int i = 0; i < nums.size(); ++i) {
         num ^= nums[i];
     }
     return num;
    }
};