class Solution {
public:
    string convert(string s, int numRows) {
        int i = 0;
        string str = "";
        int down = (2*numRows)-2;
        int up = 0;
        if(numRows == 1 || s.length()<numRows){
            return s;
        }
        while(i<numRows && s.length()>=numRows){
            int j = i;
            str+=s[i];
            while(j<s.length()){   
                if(down>0 ){
                    j=j+down;
                    if(j<s.length()){
                        str+=s[j];
                    }
                }
                if(up>0){
                    j = j+up;
                    if(j<s.length()){
                        str+=s[j];
                    }
                }
            }
                down = down-2;
                up = up+2;
                i++;
        }
        return str;
    }
};