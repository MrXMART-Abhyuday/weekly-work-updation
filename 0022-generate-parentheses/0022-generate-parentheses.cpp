class Solution {
public:
    void help(int open, int close, string curr, vector<string>& ans){
        if(open==0&&close==0){
            ans.push_back(curr);
            return;
        }
        if(open>0){
            help(open -1, close, curr+'(', ans);
        }
        if(close>open){
            help(open, close -1, curr+')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr ="";
        help(n,n,curr, ans);
        return ans;
        
    }
};