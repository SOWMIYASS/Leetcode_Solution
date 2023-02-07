class Solution {
public:
    string interpret(string command) {
        string result;
        int n=command.size();
        int i=0;
        //for(int i=0;i<command.size();i++){
        while(i<n){
            if(command[i]=='('&&command[i+1]==')') {
                result+='o';
                i=i+2;
            }
            else if(command[i]=='('&&command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')')
            {  
                result+="al";
                i=i+4;
            }
            else{
                result+=command[i];
                i++;
            }
        }
        return result;
    }
};