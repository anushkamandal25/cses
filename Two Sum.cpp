/*
Problem: https://leetcode.com/problems/two-sum/description

Approach 1:
1. Use two nested loops to check every pair (i, j)
2. If nums[i] + nums[j] == target, return {i, j}
TC: O(n^2)
SC: O(1)

Approach 2:
nums = [2, 7, 11, 15], target = 9
1. Use a hash map to store each value and its index as we iterate
2. For each element nums[i], compute need = target - nums[i]
3. If need already exists in the map, we found our pair → return {mpp[need], i}
4. Otherwise, store nums[i] → i in the map and move on
5. e.g. i=0: need=9-2=7, map empty, store {2:0}
         i=1: need=9-7=2, found 2 in map at index 0 → return {0, 1}
TC: O(n)
SC: O(n)  ← map stores at most n elements
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp; // val → index

        for (int i = 0; i < n; i++) {
            int need = target - nums[i];
            if (mpp.find(need) != mpp.end()) {
                return {mpp[need], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};