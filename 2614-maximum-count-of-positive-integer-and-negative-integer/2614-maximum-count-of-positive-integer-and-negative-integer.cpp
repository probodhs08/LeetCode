class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negsum=0;
        int possum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                possum++;
            }
            if(nums[i]<0){
                negsum++;
            }
        }
        return max(negsum,possum);
       
    }
};