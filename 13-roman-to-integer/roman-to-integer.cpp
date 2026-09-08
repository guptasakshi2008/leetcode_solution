class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        int ans;
        char a=s[s.length()-1];
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        ans=m[a];
        for(int i=s.length()-2;i>=0;i--){
             a=s[i];
             if(m[s[i]]<m[s[i+1]]){
                ans=ans-m[s[i]];
             }else{
                ans=ans+m[s[i]];
             }

        }
        return ans;
    }
};