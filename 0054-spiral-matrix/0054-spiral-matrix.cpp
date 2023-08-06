class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0,right=matrix[0].size()-1,bottom=matrix.size()-1,top=0;
        int i;
        vector<int>res;
        while(left<=right && top<=bottom){
            //Traverse from left to right 
            for(i=left;i<=right;i++)
                res.push_back(matrix[top][i]);
            top++;
            //Traverse from top to bottom
            for(i=top;i<=bottom;i++)
                res.push_back(matrix[i][right]);
            right--;
            if(left>right||top>bottom) break;
            //Traverse from right to left
            for(i=right;i>=left;i--)
                res.push_back(matrix[bottom][i]);
            bottom--;
            //Traverse from bottom to top
            for(int i=bottom;i>=top;i--)
                res.push_back(matrix[i][left]);
            left++;
            
        }
        return res;
    }
};