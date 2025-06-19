class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int p=0,mn=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]-mn<=k) {if(i==nums.size()-1) p++;}
            else{
                mn=nums[i];
                if(i!=nums.size()-1) p++;
                else p+=2;
            }
        }
        return p;
    }
};
