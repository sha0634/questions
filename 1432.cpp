class Solution {
public:
    int maxDiff(int num) {
        string s1=to_string(num),s2=to_string(num);
        int i=0;
        char flag='1',to_change;
        while(i<s1.size()){
            if(i==0 && s1[i]=='1'){
                flag='0';
                while(i<s1.size() && (s1[i]=='1' || s1[i]=='0'))i++;
                if(i>=s1.size());
                else{
                    to_change=s1[i];s1[i]=flag;
                }
            }
            else if(i==0){
                to_change=s1[i];s1[i]=flag;
            }
            else{
                if(s1[i]==to_change) s1[i]=flag;
            }
            i++;
        }
        i=0;
        while(i<s2.size()){
            if(i==0 && s2[i]=='9'){
                while(i<s2.size() && s2[i]=='9') i++;
                if(i>=s2.size());
                else{
                    to_change=s2[i];
                    s2[i]='9';
                }
            }
            else if(i==0){
                to_change=s2[i];s2[i]='9';
            }
            else{
                if(s2[i]==to_change) s2[i]='9';
            }
            i++;
        }
        return stoi(s2)-stoi(s1);
    }
};
