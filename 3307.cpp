class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        int a=0;
        k--;
        while(k>0){
            long long nums=1;
            int pow=0;
            while(nums<=k) {nums*=2;pow++;}
            if(nums==1){
                a+=operations[0];break;
            }
            
            a+=operations[pow-1];
            k=k-(nums/2);

        }
        cout<<a%26;
        return char('a'+(a%26));
    }
};
