class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int ans=-1;
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            } 
        }
        if(nums.size()==2){
            if(nums[0]==target){
                return 0;
            }
            if(nums[1]==target){
                return 1;
            }
        }
        while(left<=right){
            int mid=(right+left)/2;
            if(target<nums[mid]){
                right=mid-1;
            }
            if(target>nums[mid]){
                left=mid+1;
            }
            if(target==nums[mid]){
                ans=mid;
                break;
            }
        }
    return ans;
    }
};