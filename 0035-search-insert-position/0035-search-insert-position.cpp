class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n;
    if(nums[0]>target){
        return 0;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
        if(nums[i]<target){
            n=i;
        } 
    }
    return n+1;
    }
};