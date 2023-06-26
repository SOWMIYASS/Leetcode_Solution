class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>res;
        res.push_back(0);
        for(int i=0;i<n;i++)
            res.push_back(res[i]+gain[i]);
        sort(res.begin(),res.end());
        return res[res.size()-1];
    }
};