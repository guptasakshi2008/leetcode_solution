class Solution {
public:
    void subset(vector<int>& vec,vector<vector<int>>& ans, int n,int k,int j,int i){
       if(j==k+1){
        ans.push_back(vec);
        return;
       }
       while(i<=n){
        vec.push_back(i);
        subset(vec,ans,n,k,j+1,i+1);
        vec.pop_back();
        i++;
       }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>vec;
        vector<vector<int>>ans;
        subset(vec,ans, n,k,1,1);
        return ans;
    }
};