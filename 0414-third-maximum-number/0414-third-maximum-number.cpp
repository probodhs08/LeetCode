class Solution {
public:
    int thirdMax(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    auto it =std::unique(nums.begin(),nums.end());
    nums.resize(distance(nums.begin(),it));
    int n=nums.size();
    if(n==1)return nums[0];
    if(n==2)return nums[1];
    if(n>2){
        return nums[n-3];
    }
    return 0;
    }
};