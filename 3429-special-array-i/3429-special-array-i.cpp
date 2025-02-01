class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
    int n=nums.size();
    if(n==1)return 1;
    if(n==2 && ((nums[0]%2==0 && nums[1]%2==1) || (nums[0]%2==1 && nums[1]%2==0))){
        return true;
    }
    for(int i=1;i<n;i++){
        if(nums[i]%2==nums[i-1]%2){
            return false;
    }
    
    }return true;
    }
};