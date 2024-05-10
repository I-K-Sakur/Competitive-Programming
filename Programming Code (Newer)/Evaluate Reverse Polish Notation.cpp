//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // Map to track elements and their indices

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // The number needed to reach the target
            if (seen.count(complement)) { // If the complement exists in the map
                return {seen[complement], i}; // Return the indices of the two numbers
            }
            seen[nums[i]] = i; // Store the current number and its index
        }

        // If no two numbers meet the target, return an empty vector
        return {};
    }
};
