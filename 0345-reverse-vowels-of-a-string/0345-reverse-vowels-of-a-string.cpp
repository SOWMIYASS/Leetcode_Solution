class Solution {
public:
    string reverseVowels(string s) {
        char temp=' ';
        int start=0;
        int end=s.size()-1;
        while(start<end){
 if((s[start]=='a'||s[start]=='e'||s[start]=='i'||s[start]=='o'||s[start]=='u'||s[start]=='A'||s[start]=='E'||s[start]=='I'||s[start]=='O'||s[start]=='U')&&(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u'||s[end]=='A'||s[end]=='E'||s[end]=='I'||s[end]=='O'||s[end]=='U')){
     temp=s[end];
     s[end]=s[start];
     s[start]=temp;
     start++;
     end--;
 }
 else if((s[start]!='a'||s[start]!='e'||s[start]!='i'||s[start]!='o'||s[start]!='u'||s[start]!='A'||s[start]!='E'||s[start]!='I'||s[start]!='O'||s[start]!='U')&&(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u'||s[end]=='A'||s[end]=='E'||s[end]=='I'||s[end]=='O'||s[end]=='U')){
     start++;
 }
            else{
                end--;
            }
        }
        return s;
    }
};