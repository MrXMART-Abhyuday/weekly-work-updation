class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0;
        int j=1;
        int diff=arr[j]-arr[i];
        while(i<arr.size()&& j<arr.size()){
            if(diff!=arr[j]-arr[i]) return false;
            i++;
            j++;
        }
        return true;
    }
};