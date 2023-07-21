class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        long int res=0,ans=0;
        while(i<j){
            if(height[i]<=height[j]){
                res=(height[i]*(j-i));
                i++;
            } 
            else {
                res=height[j]*(j-i);
                j--; 
            }
            ans=max(ans,res);
        }
        return ans;
    }
};