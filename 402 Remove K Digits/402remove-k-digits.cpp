class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> ans;

        for(char ch : num){
            while(!ans.empty() && k > 0 && ans.top() > ch){
                ans.pop();
                k--;
            }
            ans.push(ch);
        }

        // CORRECTION: if k is still left, remove from end
        while(!ans.empty() && k > 0){
            ans.pop();
            k--;
        }

        string fians;
        while(!ans.empty()){
            fians.push_back(ans.top());
            ans.pop();
        }

        reverse(fians.begin(), fians.end());

        // CORRECTION: remove leading zeros
        while(fians.size() > 0 && fians[0] == '0'){
            fians.erase(0, 1);
        }

        // CORRECTION: if all digits removed
        if(fians.empty()){
            return "0";
        }

        return fians;
    }
};