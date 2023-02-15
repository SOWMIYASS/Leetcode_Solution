class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0;
        int b=0;
        int n=s.size()/2;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') a++;
            if(s[i+n]=='a'||s[i+n]=='e'||s[i+n]=='i'||s[i+n]=='o'||s[i+n]=='u'||s[i+n]=='A'||s[i+n]=='E'||s[i+n]=='I'||s[i+n]=='O'||s[i+n]=='U') b++;
  
        }
        if(a==b) return true;
        else return false;
    }
};