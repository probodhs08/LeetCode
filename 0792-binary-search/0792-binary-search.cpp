class Solution {
public:
    int search(vector<int>& nums, int target) {
    return binary_search(nums,0,nums.size()-1,target);  
    }
    int binary_search(vector<int>& nums,int low,int high,int target){
        if(low>high)return -1;
        int mid=(low+high)/2;
        if(target>nums[mid]){
            return binary_search(nums,mid+1,high,target);
        }
        else if(target==nums[mid]){
            return mid;
        }else{
            return binary_search(nums,low,mid-1,target);
        }
    }
};