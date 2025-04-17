//https://leetcode.com/problems/n-queens-ii/description/
class Solution {
public:
    bool issafec(vector<vector<int>> v ,int i,int j,int n){
        for(int a=0;a<i;a++) if(v[a][j]==1) return false;
        return true;
    }
    bool issafed(vector<vector<int>>v,int i,int j,int n){
        int r1=i,r2=i,c1=j,c2=j;
        while(r1>0 && c1>0){
            r1--;c1--;
            if(v[r1][c1]==1) return false;
        }
        while(r2>0 && c2<n-1){
            r2--;c2++;
            if(v[r2][c2]==1) return false;
        }
        return true;
    }
    void clearboard(vector<vector<int>> &bo,int i,int n){
        for(int a=i+1;a<n;a++){
            for(int b=0;b<n;b++) bo[a][b]=0;
        }
    }
    void printb(vector<vector<int>>v,int n,int a){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
            cout<<"\n";
        }
        cout<<a<<"\n";
    }
    bool check(vector<vector<int>>v,int n){
        int co=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++) if(v[i][j]==1) co++;
        }
        if(co==n) return true;
        return false;
    }
    void queen(vector<int>&v,int i,vector<vector<int>> &board,int n,int *c){
        if(i>=n) return;
        for(int a=0;a<n;a++){
            v[i]=a;
            if(issafec(board,i,a,n)&&issafed(board,i,a,n)){
                board[i][a]=1;
                // clearboard(board,i,n);
                queen(v,i+1,board,n,c);
                if(check(board,n)) {(*c)++;}
            }
            clearboard(board,i-1,n);
        }
        //clearboard(board,i-1,n);

    }
    int totalNQueens(int n) {
        vector<int> v(n,-1);
        vector<vector<int>> board(n,vector<int>(n,0));
        int c=0;
        queen(v,0,board,n,&c);
        return c;
    }
};
