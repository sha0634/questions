class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> sp(ratings.size(),1);
        int sum=0,i=1,j=ratings.size()-2;
        while(i<ratings.size()){
            if(ratings[i]>ratings[i-1]) sp[i]=sp[i-1]+1;
            i++;
        }
        while(j>=0){
            if(ratings[j]>ratings[j+1]) sp[j]=max(sp[j],sp[j+1]+1);
            j--;
        }
        for(auto it:sp) sum+=it;
        return sum;
    }
};
