class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> sp(nums.size(),0);
        for(auto v:queries){
            sp[v[0]]++;
            if(v[1]+1<sp.size()) sp[v[1]+1]--;
        }
        int m=0;
        for(int i=0;i<nums.size();i++){
            m+=sp[i];
            nums[i]=nums[i]-m;
            if(nums[i]>0) return false;
        }
        return true;
    }
};
