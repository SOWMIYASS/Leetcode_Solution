class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         int flag=0;
         for(int i=0;i<letters.size();i++){
             if(letters[i]>target){
                 return letters[i];
                 flag=1;
                 break;
             }
         }
        if(flag==0)
            return letters[0];
        return 0;
    }
};