class Solution {
public:
    void duplicates(vector<int>& nums,vector<vector<int>>& ans,vector<int>& vec,int i){
        if(i==nums.size()){
            ans.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        duplicates(nums, ans, vec, i+1);
        vec.pop_back();
        int idx = i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        duplicates(nums, ans, vec, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int>vec;
        duplicates(nums,ans, vec,0);
        return ans;
    }
};