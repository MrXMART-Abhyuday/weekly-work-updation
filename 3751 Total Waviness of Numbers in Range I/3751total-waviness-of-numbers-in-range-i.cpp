class Solution {
public:
    int totalWaviness(int num1, int num2) {
        vector<int> nums;
        int valley=0;
        int peak=0;
        int wavy=0;
        for(int i=num1;i<=num2;i++){
            nums.push_back(i);
        }
        for(int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            // 19281 19282 19283 19284 19285
            //  j j
            for(int j = 1; j < s.size()-1; j++) {
                if(s[j]>s[j-1] && s[j]>s[j+1]){
                    peak++;
                }
                if(s[j]<s[j-1] && s[j]<s[j+1]){
                    valley++;
                }
        wavy=valley+peak;
            }
        }
    return wavy;
    }
};