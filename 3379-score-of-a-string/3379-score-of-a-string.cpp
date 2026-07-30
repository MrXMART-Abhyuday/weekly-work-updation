class Solution {
public:
    int scoreOfString(string s) {
        int l=0;
        int r=1;
        int sum=0;
        while(r<s.size()){
            sum=sum+abs(s[l]-s[r]);
            l++;
            r++;
        }
    return sum;}
};