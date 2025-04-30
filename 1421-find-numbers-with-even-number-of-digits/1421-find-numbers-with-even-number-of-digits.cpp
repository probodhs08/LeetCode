class Solution {
public:
    int findNumbers(vector<int>& nums) {
     int count=0;
     for(int i=0;i<nums.size();i++){
        int n=0;
        while(nums[i]){
            nums[i]=nums[i]/10;
            n++;
        }
        if(n%2==0){
            count++;
        }
     }   
     return count;
    }
};