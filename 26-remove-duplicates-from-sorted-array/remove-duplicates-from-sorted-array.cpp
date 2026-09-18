class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int m=1;
       for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[m]=nums[i];
            m++;
            
        }
       }
       nums.erase(nums.begin()+m,nums.end());
       return m;
    }
};