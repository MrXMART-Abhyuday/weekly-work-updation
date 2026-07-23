class Solution {
public:
    int xorOperation(int n, int start) {
        vector <int> ans;
        // ans.push_back(start);
        for(int i=0;i<n;i++){
            ans.push_back(start+2*i);
        }
        int i=0;
        int out=0;
        while(i<ans.size()){
            out^=ans[i];
            i++;
        }
    return out;
    }
};