class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int m=0;
       int count =0;
       unordered_set<int>s;
       for(int i=0;i<nums.size();i++){
        if(s.find(nums[i])==s.end()){
            nums[m]=nums[i];
            m++;
            s.insert(nums[i]);
            count++;
            }
       }
       return count;
    }
};