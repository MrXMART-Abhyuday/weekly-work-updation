class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> freq;

        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        vector<int> v;

        for(auto x : freq) {
            v.push_back(x.second);
        }

        int oldSize = v.size();

        sort(v.begin(), v.end());

        v.erase(unique(v.begin(), v.end()), v.end());

        if(v.size() != oldSize) {
            return false;
        }

        return true;
    }
};