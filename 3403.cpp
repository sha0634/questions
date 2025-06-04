class Solution {
public:
    string answerString(string words, int numFriends) {
        string ans="";
        int i=0,j=1,nf=numFriends,n=words.size();

        if(words.size()==1||nf==1 ) return words;

        while(j<words.size()){
            string a=words.substr(i),b=words.substr(j);
            if(a>=b);
            else i=j;
            j++;
        }
        j=i;
        while(nf>1){
            if(j==0) j=n-1;
            else j=(j-1)%n;
            nf--;
        }
        cout<<i<<" "<<j;
        ans=words.substr(i,j-i);
        return ans;
    }
};
