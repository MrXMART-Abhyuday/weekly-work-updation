class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size()<numRows || numRows==1) return s;
        bool down=true;
        int row=0;
        vector<string> rows(numRows);
        for(char c:s){
            rows[row]+=c;
            if(row==0) down=true;
            else if(row==numRows-1) down=false;
            if(down) row++;
            else row--;
        }
        string ans="";
        for(string str:rows){
            ans+=str;
        }
return ans;
    }
};