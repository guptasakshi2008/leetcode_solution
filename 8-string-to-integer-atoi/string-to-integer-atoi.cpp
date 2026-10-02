class Solution {
public:
    int myAtoi(string s) {
        int sign =1;
        int ans =0;
        bool started = false;
        for(int i=0;i<s.length();i++){
            if(s[i]== ' ' && !started){
                continue;
            }
            if(s[i]=='-' && !started){
                sign =-1;
                started = true;
                continue;
            }else if(s[i]=='+' && !started){
                sign=1;
                started = true;
                continue;
            }
            if(isdigit(s[i])){
                started = true;
                int digit = s[i]-'0';
                if(ans>(INT_MAX-digit)/10 && sign==1){
                    return INT_MAX;
                }else if(ans>(INT_MAX-digit)/10 && sign==-1){
                    return INT_MIN;
                }
                ans=ans*10+digit;
            }else{
                break;
            }
            
        }
        if(sign==-1){
            ans = -ans;
        }
        return ans;
    }
};