class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> res;
        for (int n : nums) {
            if (n & 1) {
                int z = ((n + 1) & ~n) >> 1;
                res.push_back(n & ~z);
            } else
                res.push_back(-1);
        }
        return res;
    }
};