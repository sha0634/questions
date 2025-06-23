class Solution {
public:
    long long generate(long long num,bool odd){
        long long k=num;
        if(odd) k=k/10;
        while(k>0){
            num=num*10+k%10;
            k=k/10;
        }
        return num;
    }
    bool check(long long nums,int base){
        string str="";
        while(nums>0){
            str+=to_string(nums%base);
            nums=nums/base;
        }
        string str2=str;
        reverse(str.begin(),str.end());
        if(str==str2) return true;
        return false;
    }
    long long kMirror(int k, int n) {
        long long sum=0,l=1;
            for(long long i=1;n>0 ;i=i*10){
                for(long long j=i;n>0 && j<i*10;j++){
                    long long z=generate(j,true);
                    if(check(z,k)==true) {sum+=z; n--;}
                }
                for(long long j=i;n>0 && j<i*10;j++){
                    long long z=generate(j,false);
                    if(check(z,k)==true) {sum+=z; n--;}
                }

            }
        return sum;
    }
};
