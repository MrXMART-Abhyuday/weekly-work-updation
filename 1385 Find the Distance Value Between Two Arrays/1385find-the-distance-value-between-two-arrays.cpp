class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        vector<int> ans;

        for (int i = 0; i < arr1.size(); i++) {

            bool found = false;

            for (int j = 0; j < arr2.size(); j++) {

                if (abs(arr1[i] - arr2[j]) <= d) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans.push_back(arr1[i]);
            }
        }

        return ans.size();
    }
};