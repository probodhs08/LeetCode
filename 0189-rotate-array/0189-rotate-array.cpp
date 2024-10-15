class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int r=k%nums.size();
        for(int i=0,j=n-r-1;i<j;i++,j--){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
        }
        for(int i=n-r,j=n-1;i<j;i++,j--){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
        }
        for(int i=0,j=n-1;i<j;i++,j--){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
        }

    }
};