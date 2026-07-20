class Solution {
public:
    vector<int> partitionLabels(string s) {

        vector<int> last(26);

        // Store the last occurrence of every character
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        vector<int> ans;

        int start = 0;   // Starting index of current partition
        int end = 0;     // Ending index of current partition

        for (int i = 0; i < s.size(); i++) {

            // Update the farthest end needed
            if (last[s[i] - 'a'] > end) {
                end = last[s[i] - 'a'];
            }

            // If we've reached the end of the partition
            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return ans;
    }
};