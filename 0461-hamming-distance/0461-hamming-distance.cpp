class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int ans=0;
        long long int c=1;
        for(int i=0;i<32;i++){
           if(n&c)ans++;
            c=c<<1;
        }
        return ans;
    }
};