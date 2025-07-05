class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mpp;
        int mx=-1;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.first==it.second) {mx=max(mx,it.first);}
        }
        return mx;
    }
};
