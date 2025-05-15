class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int s=0,mx=nums[0],s2=0,mn=INT_MAX,sum=0;
        for(int i=0;i<nums.size();i++){
            s=max(nums[i],s+nums[i]);
            mx=max(s,mx);
            s2=min(nums[i],nums[i]+s2);
            mn=min(s2,mn);
            sum+=nums[i];
            cout<<mx<<" "<<mn;
            cout<<endl;
        }
        if(mn!=sum)return max(mx,sum-mn);
        return mx;
    }
};
