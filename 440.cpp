class Solution {
public:
    int calsteps(long n,long p,long p1){
        int s=0;
        while(p<=n){
            s+=min(n+1,p1)-p;
            p1*=10;
            p*=10;
        }
        return s;
    }
    int findKthNumber(int n, int k) {
        int curr=1;
        k--;
        while(k>0){
            int step=calsteps(n,curr,curr+1);
            if(k>=step){
                k-=step;
                curr++;
            }
            else{
                curr*=10;
                k--;
            }
        }
        return curr;
    }
};
