class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<int> sp;
        sort(v.begin(),v.end());
        int n=v.size()*2,mx=-1,i=0;
        while(i<n){
            int a=i/2,b=i%2;
            if(v[a][b]>mx){
                if(i==n-1) {sp.push_back(v[a][b]);i++;}
                else if(b==0) {sp.push_back(v[a][b]);i++;}
                else{
                    if( v[a][b]<v[(i+1)/2][(i+1)%2]){sp.push_back(v[a][b]);i++;}
                    else i=i+2;
                }
                mx=v[a][b]; 
            }
            else{
                if (i==n-1){ sp.push_back(mx);i++;}
                else if(mx<v[(i+1)/2][(i+1)%2]){sp.push_back(mx);i++;}
                else i=i+2;
            }
        }
        vector<vector<int>> ans;
        for(int i=0;i<sp.size();i=i+2){
            vector<int>k;
            k.push_back(sp[i]);k.push_back(sp[i+1]);
            ans.push_back(k);
        }
        return ans;
    }
};
