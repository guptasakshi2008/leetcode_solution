class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int end=height.size()-1;
        int maxWater=INT_MIN;
        while(st<end){
            int h = min(height[st],height[end]);
            int w=end-st;
            int area=h*w;
            maxWater=max(maxWater,area);
            if(height[st]<height[end]){
                st++;
            }else{
                end--;
            }
        }
        return maxWater;
    }
};