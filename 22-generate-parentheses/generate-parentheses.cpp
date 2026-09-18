void validParanthesis(int n, vector<string>&ans, string &bracket,int open, int close){
    if(bracket.size()==2*n){
        ans.push_back(bracket);
        return;
    }
    if(open < n){
        bracket += "(";
        validParanthesis(n, ans, bracket, open+1, close);
        bracket.pop_back();
    }
    if(close<open){
        bracket+=")";
        validParanthesis(n, ans, bracket, open, close+1);
        bracket.pop_back();
    }
}


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string bracket = "";
        validParanthesis(n,ans,bracket,0,0);
        return ans;
    }
};