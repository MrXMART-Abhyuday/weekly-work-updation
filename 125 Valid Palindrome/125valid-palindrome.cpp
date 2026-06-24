class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<char> no;
        for(int i=0;i<s.size();i++){
            if(!isalnum(s[i])) continue;
            else{
                no.push_back(s[i]);
            }
        }
        int left=0;
        int right=no.size()-1;
        bool ans=false;
        while(left<right){
            if(no[left]!=no[right]) return ans;
            left++;
            right--;
        }
    ans=true;
return ans;
    }
};