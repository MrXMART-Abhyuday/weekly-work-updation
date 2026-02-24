class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak;
        int n=arr.size();
        if(arr.size()==1){
            peak=0;
            return peak;
        }
        if(arr[n-1]>arr[n-2]){
                peak=n-1;
        }
        if(arr[0]>arr[1]){
            peak=0;
            return peak;
        }
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                peak=i;
            }
        }
    return peak;
    }
};
