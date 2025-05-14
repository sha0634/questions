class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h){//we need to have three partition and no need to do swapping for elements outside range
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==2){
                swap(nums[h],nums[m]);h--;
            }
            else m++;
        }
    }
};
