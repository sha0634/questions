class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int s=nums[0],s1=nums[0],mx=nums[0];
        for(int i=1;i<nums.length;i++){
            s=Math.max(nums[i],nums[i]+s);
            s1=Math.min(nums[i],nums[i]+s1);
            mx=Math.max(Math.max(Math.abs(s1),Math.abs(s)),mx);
        }
        return Math.abs(mx);
    }
}
