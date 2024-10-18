class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int ,int> hashmap;
    for(int i=0;i<nums.size();i++){
        hashmap[nums[i]]++;
    }
    int maxv=INT_MIN;
    int maxk=-1;
    for(const auto& pair : hashmap){
        if(maxv<pair.second){
            maxv=pair.second;
            maxk=pair.first;
        }
    }
    return maxk;   
    }
};