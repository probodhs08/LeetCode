class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int digitSum=0;
        int digitProduct=1;
        while(x){
            digitSum+=x%10;
            digitProduct*=x%10;
            x=x/10;
        }
        if(n%(digitSum+digitProduct)==0)return true;
        else return false;
    }
};