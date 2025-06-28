class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue <pair<int,int>> pq;
        for(int i=0;i<nums.size();i++) pq.push({nums[i],i});
        vector<int>v;
        map<int,int>mpp;
        while(!pq.empty() && k>0) {
            mpp[pq.top().second]=pq.top().first;pq.pop();k--;
        }
        for(auto it:mpp) v.push_back(it.second);
        return v;
    }
};
