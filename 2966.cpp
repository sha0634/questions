class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i=i+3){
            vector<int>v;
            for(int j=0;j<3 && j<nums.size();j++){
                v.push_back(nums[i+j]);
            }
            ans.push_back(v);
            if(nums[i+2]-nums[i]>k) return {};
        }
        return ans;
    }
};
