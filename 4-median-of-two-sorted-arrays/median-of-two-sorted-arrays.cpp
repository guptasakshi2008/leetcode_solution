class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                vec.push_back(nums2[j]);
                j++;
            }else{
                vec.push_back(nums1[i]);
                i++;
            }
        }
        while(i<n){
            vec.push_back(nums1[i]);
            i++;
        }
         while(j<m){
            vec.push_back(nums2[j]);
            j++;
        }
        int v=vec.size();
        if(v%2==0){
            return (double)(vec[v/2]+vec[(v-1)/2])/2;
        }
        return vec[v/2];
    }
};