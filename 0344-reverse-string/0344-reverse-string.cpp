class Solution {
public:
    void reverseString(vector<char>& s) {
        char ch=' ';
        int i=0;
        int j=s.size()-1;
        while(i<j){
            ch=s[i];
            s[i]=s[j];
            s[j]=ch;
            i++;
            j--;
        }
        
    }
};