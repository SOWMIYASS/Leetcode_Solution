class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>answer;
        vector<pair<double,vector<int>>>d;
        for(auto i:points){
            double dist=sqrt(i[0]*i[0]+i[1]*i[1]);
            d.push_back({dist,i});
        }
        sort(d.begin(),d.end());
        for(int i=0;i<k;i++) answer.push_back(d[i].second);
        return answer;
    }
};