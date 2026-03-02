class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size(), res = 0;
        vector<int> a(n);

        // Precompute trailing zeros for each row
        for (int i = 0; i < n; i++) {
            int j = n - 1, cnt = 0;
            while (j >= 0 && grid[i][j] == 0) { cnt++; j--; }
            a[i] = cnt;
        }

        // Greedy: for row i, we need at least (n-1-i) trailing zeros
        for (int i = 0; i < n; i++) {
            if (a[i] < n - 1 - i) {
                int j = i;
                // Find nearest valid row below
                while (j < n && a[j] < n - 1 - i) j++;
                if (j == n) return -1; // No valid row found
                // Bubble row j up to position i
                while (i < j) {
                    swap(a[j], a[j - 1]);
                    res++;
                    j--;
                }
            }
        }

        return res;
    }
};