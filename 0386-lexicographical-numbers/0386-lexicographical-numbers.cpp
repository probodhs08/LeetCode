class Solution {
public:
    vector<int> ans;
    vector<int> lexicalOrder(int n) {
    for(int i=1;i<=9;i++){
        lexico(i,n);
    } 
    return ans;   
    }
    void lexico(int i,int n){
        if(i>n){
            return;
        }
        ans.push_back(i);
        for(int j=0;j<=9;j++){
            if(10*i+j>n){
                return;
            }
            lexico(10*i+j,n);
        }
    }
};