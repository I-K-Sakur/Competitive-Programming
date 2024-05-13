//https://leetcode.com/problems/concatenation-of-array/description/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int siz = nums.size();
        vector<int> v = nums;
        
        // Concatenate nums with itself
        v.insert(v.end(), nums.begin(), nums.end());
        
        return v; // Return the concatenated vector
    }
};
