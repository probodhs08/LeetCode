class Solution {
public:
    bool isPalindrome(string s) {
    string k;
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            k+=tolower(s[i]);
        }
    }   
    string c=k;
    reverse(c.begin(),c.end());
    if(c==k){
    return 1;
    }else{
        return 0;
    } 
    }
};