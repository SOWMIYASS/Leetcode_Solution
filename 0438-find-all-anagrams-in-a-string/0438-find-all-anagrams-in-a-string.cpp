class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        int hash1[26]={0};
        vector<int>ans;
        for(auto ch:p) hash1[ch-'a']++;
        int n,count;
        for(int i=0;i<=s.size()-p.size();i++){
            int hash2[26]={0};
            count=0;
            n=i+p.size();
           while(n!=i){
               hash2[s[n-1]-'a']++;
                //cout<<s[n-1]<<" ";
               n--;
           }
            for(int j=0;j<26;j++)
                if(hash1[j]==hash2[j])count++;
            cout<<count<<"  ";
            if(count==26) ans.push_back(i);
        }
        return ans;
    }
};