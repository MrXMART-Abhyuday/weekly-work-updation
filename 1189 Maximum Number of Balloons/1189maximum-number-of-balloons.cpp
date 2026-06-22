class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char,int> freq;
        for(int i=0;i<text.size();i++){
            freq[text[i]]++;
        }
        int b=freq['b'];
        int a=freq['a'];
        int l=freq['l'];
        int o=freq['o'];
        int n=freq['n'];
        return min({b,a,l/2,o/2,n});

    }
};