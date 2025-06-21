class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char,int>freq;
        int n=word.size();
        int ans=n;
        for(char i:word){
            freq[i]++;
        }
        for(auto [minchar,f1] :freq){
            int del=0;
            for(auto [currchar,f2] : freq){
                int diff=f2-f1;
                if(f1>f2){
                    del+=f2;
                }
                else if(diff>k){
                    del+=(f2-f1-k);
                }
            }
            ans=min(ans,del);
        }
        return ans;
    }
};