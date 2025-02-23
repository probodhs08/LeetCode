class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()>=needle.size()){
            return haystack.find(needle);
        }
        return -1;
    }
};