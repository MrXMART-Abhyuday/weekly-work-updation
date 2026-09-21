class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int org=s[i]-'a'+1;
            int rev=27-org;
            int mul=org*rev;
             ans += rev * (i + 1);
        }
    return ans;
    }
};