class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mpp;
        set<int>s;
        for(auto it:nums){ mpp[it]++;s.insert(it);}
        int mx=0;
        auto it=s.begin();
        while(it!=s.end()){
            auto jt=it;it++;
            if(it==s.end()) break;
            cout<<*it<<" "<<*jt<<endl;
            if(abs(*it-*jt)==1) mx=max(mx,mpp[*it]+mpp[*jt]);
            
        }
        return mx;
    }
};
