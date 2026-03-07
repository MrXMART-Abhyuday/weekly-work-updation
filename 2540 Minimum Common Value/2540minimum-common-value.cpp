class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int l=0;
       int r=0;
       int min=-1;
       while(l<nums1.size()&&r<nums2.size()){
        if(nums1[l]==nums2[r]){
            min=nums1[l];
            return min;
        }
        else if (nums1[l]<nums2[r]){
            l++;
        }
        else r++;
       } 
    return min;
    }
};