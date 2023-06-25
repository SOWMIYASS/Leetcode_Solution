class Solution {
public:
    int xorOperation(int n, int start) {
        int a=0,b;
        for(int i=0;i<n;i++){
            b=start+2*i;
            a^=b;
        }
        return a;
    }
};