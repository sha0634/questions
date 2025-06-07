class Solution {
public:
    struct comp {
        bool operator()(const pair<char, int>& a, const pair<char, int>& b) {
            if (a.first != b.first) {
                return a.first > b.first; // smaller char comes first
            } else {
                return a.second <
                       b.second; // for same char, larger int comes first
            }
        }
    };
    string clearStars(string s) {
        priority_queue<pair<char, int>, vector<pair<char, int>>, comp> pq;
        string ans="";
        vector<int> v(s.size(),0);
        for(int i=0;i<s.size();i++){
            if(pq.empty() && s[i]=='*') v[i]=-1;
            else if(s[i]=='*'){
                v[pq.top().second]=-1;
                v[i]=-1;
                pq.pop();
            }
            else pq.push({s[i],i});
        }
        for(int i=0;i<s.size();i++){
            if(v[i]==-1);
            else ans+=s[i];
        }
        return ans;
    }
};
