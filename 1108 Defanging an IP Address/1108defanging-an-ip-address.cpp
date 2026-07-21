class Solution {
public:
    string defangIPaddr(string address) {
    //     for(int i=0;i<address.size()-1;i++){
    //         if(address[i]=='.'){
    //             address.insert(i-1, 1,'[');
    //             address.insert(i+1, 1,']');
    //         }
    //     }
    // return address;
        string ans="";
        for(char c:address){
            if(c=='.'){
                ans+='[';
                ans+='.';
                ans+=']';
                continue;
            }
            ans+=c;
        }
        return ans;
    }
};