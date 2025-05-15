class Solution {
  //classic kadane's algo
    public int maxSubArray(int[] nums) {
        int s=0,mx=nums[0];
        for(int i=0;i<nums.length;i++){
            s=Math.max(nums[i],nums[i]+s);
            mx=Math.max(s,mx);
        }
        return mx;
    }
}
