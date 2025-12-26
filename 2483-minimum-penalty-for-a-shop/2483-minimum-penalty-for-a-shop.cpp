class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty = 0, best_penalty = 0, ans = 0;
        for(int i = 0; i < customers.size(); i++) {
            if(customers[i] == 'Y') {
                penalty--;
                if(penalty < best_penalty) {
                    best_penalty = penalty;
                    ans = i + 1;
                }
            }
            else penalty++;
        }
        return ans;
    }
};