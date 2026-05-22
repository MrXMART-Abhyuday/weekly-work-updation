class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int ans=0;
        while(i<s.size()){
            int j=i;
            int count=0;

            while(j<s.size()){
                int flag=0;
                for(int k=i;k<j;k++){
                    if(s[k]==s[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
                count++;
                j++;
            }
            if(count>ans)ans=count;
            i++;
        }
        return ans;
    }
};