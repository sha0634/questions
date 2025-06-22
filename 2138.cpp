class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v;
        map<char,int>mpp;
        for(auto it:s){
            if(mpp.find(it)==mpp.end()){
                if(v.empty()==true || v.back().size()==k){
                    string str="";str+=it;v.push_back(str);
                }
                else{
                    v.back()+=it;
                }
            }
            else ;
        }
        if(v.back().size()<k){
            while(v.back().size()<k) v.back()+=fill;
        } 
        return v;
    }
};
