class Solution {
public:
    vector<int> findit(vector<string> v,char x){
        vector<int> vx(2,-1);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==x){
                    vx[0]=i;vx[1]=j;
                }
            }
        }
        return vx;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        set<char>s;
        vector<string>v;
        string ans="";


        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]) continue;
            if(s.find(s1[i])!=s.end() && s.find(s2[i])!=s.end() ){
                vector<int> v1=findit(v,s1[i]);
                vector<int> v2=findit(v,s2[i]);
                if(v1[0]==v2[0]);
                else{
                    string str1=v[v1[0]];string str2=v[v2[0]];
                    v.erase(v.begin()+v1[0]);
                    v2=findit(v,s2[i]);
                    v.erase(v.begin()+v2[0]);
                    v.push_back(str1+str2);
                }
            } 
            else if(s.find(s1[i])!=s.end()){
                s.emplace(s2[i]);
                vector<int>v1=findit(v,s1[i]);
                v[v1[0]]+=s2[i];
            }
            else if(s.find(s2[i])!=s.end()){
                s.emplace(s1[i]);
                vector<int> v2=findit(v,s2[i]);
                v[v2[0]]+=s1[i];
            }
            else{
                s.emplace(s1[i]);s.emplace(s2[i]);
                string str="";
                str=str+s1[i]+s2[i];
                v.push_back(str);
            }
        }

        for(int i=0;i<v.size();i++){
            sort(v[i].begin(),v[i].end());
        }

        for(auto it:baseStr){
            int f=0,b=0;
            for(auto i:v){
                for(int j=0;j<i.size();j++){
                    if(i[j]==it){
                        ans+=i[0];
                        b=1;
                        f=1;
                        break;
                    }
                    if(b==1) break;
                }
            }
            if(f==0) ans+=it;
        }

        return ans;

    }
};
