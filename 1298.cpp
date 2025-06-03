class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int sum=0;
        vector<int> visited(status.size(),0);
        queue<int> q;
        for(auto it:initialBoxes){
            q.push(it);
            visited[it]=1;
        }
        while(!q.empty()){
            int k=q.front();
            if(status[k]==1){
                sum+=candies[k];
                for(auto it:keys[k]) {
                    status[it]=1;
                    if(visited[it]==-1) {q.push(it);visited[it]=1;}
                }
                for(auto it:containedBoxes[k]){ q.push(it);visited[it]=1;}
            }
            else visited[k]=-1;
            q.pop();
        }
        return sum;
    }
};
