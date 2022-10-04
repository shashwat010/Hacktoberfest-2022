class Solution {
public:
    string interpret(string command) {
        int i;
        string ans;
        for(i=0;i<command.size();i++){
            if(command[i]=='('&&command[i+1]==')'){
                ans.push_back('o');
                
            }
            else if(command[i]=='('&&command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')'){
                ans.push_back('a');
                ans.push_back('l');
                
            }
            else if(command[i]=='G'){
                ans.push_back('G');
                
            }
            
        }
        return ans;
        
    }
};
