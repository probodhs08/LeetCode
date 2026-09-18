class Solution {
public:

    // Starting from L, find the smallest R such that
    // s[L...R] is a valid substring.
    //
    // Return -1 if no valid substring can start at L.
    int getRight(const string& s,
                 int L,
                 vector<int>& first,
                 vector<int>& last) {

        int R = last[s[L] - 'a'];

        for (int i = L; i <= R; i++) {

            int c = s[i] - 'a';

            // We included character c, but one of its
            // occurrences exists before L.
            //
            // Therefore a valid substring cannot start at L.
            if (first[c] < L)
                return -1;

            // If c occurs farther to the right,
            // we are forced to include that occurrence too.
            R = max(R, last[c]);
        }

        return R;
    }

    vector<string> maxNumOfSubstrings(string s) {

        int n = s.size();

        vector<int> first(26, n);
        vector<int> last(26, -1);

        // ------------------------------------------------
        // Step 1: Find first and last occurrence
        // of every character.
        // ------------------------------------------------
        for (int i = 0; i < n; i++) {

            int c = s[i] - 'a';

            first[c] = min(first[c], i);
            last[c] = i;
        }

        vector<pair<int, int>> intervals;

        // ------------------------------------------------
        // Step 2: Build every minimal valid interval.
        //
        // A useful candidate only needs to start at the
        // first occurrence of some character.
        // ------------------------------------------------
        for (int c = 0; c < 26; c++) {

            if (first[c] == n)
                continue;

            int L = first[c];

            int R = getRight(
                s,
                L,
                first,
                last
            );

            if (R != -1) {
                intervals.push_back({L, R});
            }
        }

        // ------------------------------------------------
        // Step 3: Earliest finishing interval first.
        //
        // For the same ending position, prefer the
        // shorter interval (larger L).
        // ------------------------------------------------
        sort(intervals.begin(),
             intervals.end(),
             [](const auto& a, const auto& b) {

                 if (a.second != b.second)
                     return a.second < b.second;

                 return a.first > b.first;
             });

        // ------------------------------------------------
        // Step 4: Classic greedy interval scheduling.
        // ------------------------------------------------
        vector<string> ans;

        int lastEnd = -1;

        for (auto [L, R] : intervals) {

            if (L > lastEnd) {

                ans.push_back(
                    s.substr(
                        L,
                        R - L + 1
                    )
                );

                lastEnd = R;
            }
        }

        return ans;
    }
};