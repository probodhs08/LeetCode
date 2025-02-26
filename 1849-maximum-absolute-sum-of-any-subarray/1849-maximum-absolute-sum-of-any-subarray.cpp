class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr_min=0, curr_max=0;
        int max_sum=0,min_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_max=max(nums[i],curr_max+nums[i]);
            max_sum=max(curr_max,max_sum);
            curr_min=min(nums[i],curr_min+nums[i]);
            min_sum=min(curr_min,min_sum ); 
        }
        return max(abs(min_sum),max_sum);
    }
};