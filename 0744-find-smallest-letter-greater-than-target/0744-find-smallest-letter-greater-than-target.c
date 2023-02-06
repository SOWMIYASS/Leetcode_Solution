char nextGreatestLetter(char* letters, int lettersSize, char target){
         int flag=0;
         for(int i=0;i<lettersSize;i++){
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