class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int ans=0;
        long long int i;
        for(i=1;i<=n;i=i<<1){
           if(n&i)ans++;
        }
        return ans;
    }
};