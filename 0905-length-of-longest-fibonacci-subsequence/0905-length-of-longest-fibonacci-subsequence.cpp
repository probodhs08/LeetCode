class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> index_map;
    unordered_map<int, int> dp;
    int max_length = 0;
    for (int i = 0; i < n; i++) {
        index_map[arr[i]] = i;
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < j; i++) {
            int x = arr[i], y = arr[j];
            int target = x + y;
            if (index_map.find(target) != index_map.end()) {
                int k = index_map[target];
                int length = dp.count(i * n + j) ? dp[i * n + j] : 2;
                dp[j * n + k] = length + 1;
                max_length = max(max_length, dp[j * n + k]);
            }
        }
    }

    return max_length >= 3 ? max_length : 0;
}
};