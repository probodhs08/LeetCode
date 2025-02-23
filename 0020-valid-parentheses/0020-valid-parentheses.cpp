class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)return true;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty())return false;
            char ch=st.top();
            st.pop();
            if((s[i]==')' && ch!='(') ||
            (s[i]=='}' && ch!='{')||
            (s[i]==']'&& ch!='[')){
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }else{
        return false;
    }
    }
};