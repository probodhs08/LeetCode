class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if (n<3)return false;
        string vow="aeiouAEIOU";
        int vowel=0,consonant=0;
        for (char c : word){
            if(isalpha(c)){
                if(vow.find(c)!=string::npos){
                    vowel++;
                }else{
                    consonant++;
                }
            }else if(!isdigit(c))return false;
        }
        return vowel>=1 && consonant>=1;
    }
};