class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        map<int, int> m;
        int rank = 1;
        for (int i=0;i<temp.size();i++) {
            if (m.count(temp[i])==0) {
                m[temp[i]]=rank;
                rank++;
            }
        }
        vector<int> ans;
        for (int i=0;i<arr.size();i++) {
            ans.push_back(m[arr[i]]);
        }
        return ans;
    }
};