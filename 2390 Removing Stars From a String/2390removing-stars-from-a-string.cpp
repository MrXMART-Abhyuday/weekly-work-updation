class Solution {
public:
    string removeStars(string s) {
        stack <char> des;
        int i=0;
        while(i<s.size()){
            if(s[i]!= '*'){
                des.push(s[i]);
                i++;
            }
            if(s[i]=='*'){
                des.pop();
                i++;
            }
        }
        string ans;
        while(!des.empty()){
            ans.push_back(des.top());
            des.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};