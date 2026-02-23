class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l = nums1.size();
        int r = nums2.size();

        vector<int> combined(l + r);

        for(int i = 0; i < l; i++){
            combined[i] = nums1[i];
        }

        for(int i = 0; i < r; i++){
            combined[l + i] = nums2[i];
        }

        sort(combined.begin(), combined.end());

        int p = combined.size();

        if(p % 2 == 0){
            return (combined[p/2] + combined[(p/2)-1]) / 2.0;
        }
        else{
            return combined[p/2];
        }
    }
};