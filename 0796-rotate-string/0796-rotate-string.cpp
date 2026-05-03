class Solution {
public:
    bool rotateString(string s, string goal) {
    for(int i=0;i<s.size();i++){
        if(s==goal)return true;
        char k=s[0];
        for(int j=0;j<s.size();j++){
            s[j]=s[j+1];
        }
        s[s.size()-1]=k;
    }   
    return false;
    }
};