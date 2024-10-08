class Solution {
public:
     int minSwaps(string brackets) {
        int swapCount = 0; 
        int imbalance = 0;
        for(char bracket : brackets) {
            if(bracket == ']') { 
                if(imbalance == 0) {  
                    swapCount++;  
                    imbalance++; 
                } else {
                    imbalance--; 
                }
            } else {
                imbalance++;
            }
        }
        
        return swapCount;  
    }
};