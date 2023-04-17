#include<bits/stdc++.h>
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int b=c.size();
        int x=c[0],a;
        for(int i=1;i<b;i++){
           if(x<c[i])
              x=c[i];
       }
       a=x;
        vector<bool>result;
        for(int i=0;i<c.size();i++){
               if((c[i]+e)>=a){
                  result.push_back(true);
               }
               else{
                result.push_back(false);
               }
        }
        return result;
        
        
    }
};