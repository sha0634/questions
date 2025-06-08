class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>v;
        for(int i=1;i<=n;i++){
            v.push_back(to_string(i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        vector<int>ans;
        for(auto it:v) ans.push_back(stoi(it));
        return ans;
    }
};
