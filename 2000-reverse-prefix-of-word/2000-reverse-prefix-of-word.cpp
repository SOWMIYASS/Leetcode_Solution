class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        int j;
        int k=0;
        char temp;
         for(j=0;j<word.size();j++){
            //if(word[j]!=ch) count++;
            if(word[j]==ch) break;
     
        }
        cout<<j;
        if(j==word.size()) return word;
        while(k<j){
            temp=word[j];
            word[j]=word[k];
            word[k]=temp;
            k++;
            j--;
        }
        return word;
    }
};