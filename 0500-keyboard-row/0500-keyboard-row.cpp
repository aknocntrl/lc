class Solution{
public:
    vector<string> findWords(vector<string>& words){
        string r1="qwertyuiop";
        string r2="asdfghjkl";
        string r3="zxcvbnm";
        vector<string> ans;
        for(string word:words){
            string s=word;
            for(char &c:s){
                c=tolower(c);}
            string row;
            if(r1.find(s[0])!=string::npos){
                row=r1;}
            else if(r2.find(s[0])!=string::npos){
                row=r2;}
            else{
                row=r3;}
            bool ok=true;
            for(char c:s){
                if(row.find(c)==string::npos){
                    ok=false;
                    break;}}
            if(ok){
                ans.push_back(word);}}
        return ans;}
};