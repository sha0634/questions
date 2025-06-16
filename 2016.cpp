class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx=-1;
        vector<int> nextGreatest(nums.size(),-1);
        priority_queue<int>pq;
        for(int i=nums.size()-1;i>=0;i--){
            if(pq.empty()==true );
            else if (pq.top()<=nums[i]);
            else{
                nextGreatest[i]=pq.top();
            }
            if(nextGreatest[i]!=-1) mx=max(mx,nextGreatest[i]-nums[i]);
            pq.push(nums[i]);
        }
        return mx;
    }
};
