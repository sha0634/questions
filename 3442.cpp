class Solution {
public:
    int maxDifference(string s) {
        priority_queue <int> pqo;
        priority_queue <int,vector<int>,greater<int>> pqe;
        sort(s.begin(),s.end());
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]==s[i]) j++;
            if((j-i)%2==0) pqe.push(j-i);
            else pqo.push(j-i);
            i=j;
        }
        return pqo.top()-pqe.top();

    }
};
