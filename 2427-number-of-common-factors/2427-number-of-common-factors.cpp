class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0;
        vector<int>v;
        int d=min(a,b);
        for(int i=1;i<=d;i++) 
          if(a%i==0&&b%i==0) v.push_back(i);
        //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    //     // for(int j=1;j<=b;j++)
    //     //   if(b%j==0) v.push_back(j);
    //     unordered_map<int,int>m;
    //     for(auto i:v)
    //       m[i]=m[i]+1;
    //     for(auto i:m)
    //       if(i.second==2) c++;
    // return c;
        return v.size();
        
    }
};