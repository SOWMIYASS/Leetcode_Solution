class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        vector<int>m(n,0);
        m[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
            m[i]=max(m[i+1],prices[i]);
        for(int i=0;i<n;i++)
            profit=max(profit,m[i]-prices[i]);
        return profit;
        
    }
};