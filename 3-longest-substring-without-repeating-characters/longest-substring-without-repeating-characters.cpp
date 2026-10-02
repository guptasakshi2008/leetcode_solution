class Solution {
public:
    int lengthOfLongestSubstring(string str) {
       int left = 0;
       int maxLength = 0;
       unordered_set<char>s;
       for(int right = 0;right<str.length();right++){
            while(s.find(str[right])!=s.end()){
                s.erase(str[left]);
                left++;
            }
            s.insert(str[right]);
            if(maxLength <right-left+1){
                maxLength = right-left+1;
            }
       }
       return maxLength;
    }
};