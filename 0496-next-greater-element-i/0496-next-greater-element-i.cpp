class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums1copy = nums1;
        vector<int> nums2copy = nums2;

        sort(nums1copy.begin(), nums1copy.end());
        sort(nums2copy.begin(), nums2copy.end());

        vector<int> unq;

        int i = 0, j = 0;
        while(i < nums1copy.size() && j < nums2copy.size()) {

            if(nums1copy[i] == nums2copy[j]) {
                unq.push_back(nums1copy[i]);
                i++;
                j++;
            }
            else if(nums1copy[i] < nums2copy[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        stack<int> check;
        vector<int> greater(unq.size(), -1);

        // Find next greater elements in original nums2
        for(int x : nums2) {

            while(!check.empty() && x > check.top()) {

                int val = check.top();
                check.pop();

                // Check if val is in unq
                for(int k = 0; k < unq.size(); k++) {
                    if(unq[k] == val) {
                        greater[k] = x;
                        break;
                    }
                }
            }

            check.push(x);
        }

        // Remaining elements have no greater element
        while(!check.empty()) {

            int val = check.top();
            check.pop();

            for(int k = 0; k < unq.size(); k++) {
                if(unq[k] == val) {
                    greater[k] = -1;
                    break;
                }
            }
        }

        // Put answers in nums1's original order
        vector<int> ans;

        for(int x : nums1) {
            for(int k = 0; k < unq.size(); k++) {
                if(unq[k] == x) {
                    ans.push_back(greater[k]);
                    break;
                }
            }
        }

        return ans;
    }
};