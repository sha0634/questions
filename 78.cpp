//link:https://leetcode.com/problems/subsets/description/
class Solution {
public:
    void subset(vector<int> &v,vector<int> nums,set<vector<int>> &s,int i,int n){
        s.emplace(v);i++;
        for(int a=i;a<n;a++){
            v.push_back(nums[a]);
            subset(v,nums,s,a,n);//error prone
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ans1;
        vector<int> v;
        subset(v,nums,ans1,-1,nums.size());
        vector<vector<int>> ans;
        for(auto it:ans1) ans.push_back(it);    
        return ans; 
    }
};
