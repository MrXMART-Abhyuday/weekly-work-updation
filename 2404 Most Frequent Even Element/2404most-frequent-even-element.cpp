class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        vector<int> even;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
        }

        if(even.size()==0) return -1;

        sort(even.begin(),even.end());

        int first=0;
        int second=1;
        int freq=1;
        int maxfreq=1;
        int ans=even[0];

        while(second<even.size()){
            if(even[first]==even[second]){
                freq++;
                second++;
            }
            else{
                if(freq>maxfreq){
                    maxfreq=freq;
                    ans=even[first];
                }
                first=second;
                second++;
                freq=1;
            }
        }

        if(freq>maxfreq) ans=even[first];

        return ans;
    }
};