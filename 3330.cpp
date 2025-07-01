class Solution {
public:
    int possibleStringCount(string word) {
        int i=0;
        int ans=1;
        while(i<word.size()){
            int j=i;
            while(j<word.size()&&word[i]==word[j]) j++;
            if(j-i>1) ans+=(j-i-1);
            i=j;
        }
        return ans;
    }
};
