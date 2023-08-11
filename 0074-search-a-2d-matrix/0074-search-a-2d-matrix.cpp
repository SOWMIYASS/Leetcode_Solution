class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0,c=matrix[0].size()-1;
        while(r<matrix.size()&&c>-1){
            int mid=matrix[r][c];
            if(mid==target) return true;
            else if(target>mid) r++;
            else c--;
        }
        return false;
    }
};