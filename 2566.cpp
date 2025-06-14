class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num),t=to_string(num);
        char k=s[0];
        for(int i=0;i<s.size();i++){
            if(s[i]==k) s[i]='0';
        }
        int mn=stoi(s);
        int x=0;
        while(x<t.size() && t[x]=='9') x++;
        if(x<t.size()){
        char l=t[x];
        for(int i=0;i<t.size();i++){
            if(t[i]==l) t[i]='9';
        }}
        int mx=stoi(t);
        return mx-mn;
    }
};
