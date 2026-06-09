class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long max=0,min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max) max=nums[i];
            if(nums[i]<min) min=nums[i];
        }
        return (max-min)*k;
    }
};