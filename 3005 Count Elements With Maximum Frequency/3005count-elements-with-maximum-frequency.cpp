class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> arr(101,0);

        int j=1;
        int count=0;

        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size();i++){

            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }

            count=j-i;          // frequency of current number
            arr[nums[i]]=count;

            i=j-1;              // skip processed elements
            j++;
        }

        int max=0;
        int ans=0;

        for(int i=0;i<arr.size();i++){

            if(arr[i]>max){
                max=arr[i];
                ans=max;
            }

            else if(arr[i]==max){
                ans=ans+max;
            }
        }

        return ans;
    }
};