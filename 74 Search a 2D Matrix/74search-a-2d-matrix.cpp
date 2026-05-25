class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        while(i<matrix.size()){
            if(target>matrix[i][matrix[i].size()-1]){
                i++;
            }
            else if(target==matrix[i][matrix[i].size()-1]) return true;
            else{
                for(int j=0; j<matrix[i].size(); j++){
                    if(target==matrix[i][j]){
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};