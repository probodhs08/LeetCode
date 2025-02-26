class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>f;
       for(char c : s){
        f[c]++;

       }
       priority_queue<pair<int,char>>pq;
       for(auto i : f){
        pq.push({i.second,i.first});

       }
       string ans="";
       while(!pq.empty()){
        ans+=string((pq.top()).first,(pq.top()).second);
        pq.pop();
       }
       return ans;
    }
};