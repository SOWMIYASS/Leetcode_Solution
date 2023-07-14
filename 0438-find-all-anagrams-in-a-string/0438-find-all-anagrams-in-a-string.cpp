class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        vector<int>ans;
        int n,count;
        int hash1[26]={0};
        for(auto ch:p) hash1[ch-'a']++;
        for(int i=0;i<=s.size()-p.size();i++)
        {
            int hash2[26]={0};
            count=0;
            n=i+p.size();
            while(n!=i)
            {
                hash2[s[n-1]-'a']++;
                n--;
            }
            for(int j=0;j<26;j++) if(hash1[j]==hash2[j]) count++;
            if(count==26) ans.push_back(i);
        }
        return ans;
    }
};