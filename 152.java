class Solution {
    public int maxProduct(int[] nums) {
        int s=nums[0],mn=nums[0],mx=nums[0];
        for(int i=1;i<nums.length;i++){
            int k=s;
            s=Math.max(Math.max(s*nums[i],mn*nums[i]),nums[i]);
            mx=Math.max(s,mx);
            mn=Math.min(Math.min(k*nums[i],mn*nums[i]),nums[i]);
        }
        return mx;
    }
}
