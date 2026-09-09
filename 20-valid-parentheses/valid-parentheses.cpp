class Solution {
public:
    bool isValid(string s) {
        stack<int>ans;
        int i=0;
        while(i<s.length()){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                ans.push(s[i]);
            }else{
                if(ans.empty()){
                    return false;
                }
                if((s[i]==')' && ans.top()=='(') || (s[i]=='}' && ans.top()=='{') || (s[i]==']' && ans.top()=='[')){
                    ans.pop();
                }else{
                    return false;
                }
            }
            i++;
        }
        if(!ans.empty()){
            return false;
        }
        return true;
    }
};