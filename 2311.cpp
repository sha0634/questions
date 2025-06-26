class Solution {
public:
    int longestSubsequence(string s, int k) {
        int ans=0,val=0,p=0;
        for(auto it:s) if(it=='0')ans++;
        for(int i=s.size()-1;i>=0;i--){
            if(val>k) break;
            if(s[i]=='0')p++;
            else if(s[i]=='1'&& val+pow(2,p)<=k){
                ans++;val+=pow(2,p);p++;
            }
        }
        return ans;
    }
};
