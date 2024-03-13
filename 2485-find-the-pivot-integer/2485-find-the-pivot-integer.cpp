class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return 1;
        int leftsum=0;
        int rightsum=(n*(n+1))/2;
        for(int i=1;i<=n;i++){
            rightsum-=i;
            if(rightsum==leftsum) return i;
            leftsum+=i;
        }
        return -1;
    }
};
