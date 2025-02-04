class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int curr_sum=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                curr_sum+=nums[i];
            }else{
                curr_sum=nums[i];
            }
            max_sum=max(curr_sum,max_sum);
        } 
        cout<<curr_sum;
        return max_sum;  
    }
};