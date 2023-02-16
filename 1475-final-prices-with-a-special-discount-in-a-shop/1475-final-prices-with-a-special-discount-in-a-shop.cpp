class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        for(int i=0;i<p.size();i++){
           for(int j=i+1;j<p.size();j++){
               if(p[i]>=p[j]){
                   p[i]=p[i]-p[j];
                   break;
                  }
               }
            }
        return p;
    }
};