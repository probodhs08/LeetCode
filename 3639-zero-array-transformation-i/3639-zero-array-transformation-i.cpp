class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& qs) {
        int n = nums.size();
        vector<int>v(n+1);
        for(auto i : qs){
            v[i[0]]++;
            v[i[1]+1]--;
        }
        int sum =0;
        for(int i=0;i<n;i++){
            sum +=v[i];
            if (nums[i] <= sum) nums[i] = 0;
            else return false;
        }
        return true;
    }
};