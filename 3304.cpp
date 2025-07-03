class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
        while(str.size()<=k+1){
            string jusg="";
            for(auto it:str){
                if(it=='z') jusg+='a';
                else jusg+=char(it+1);
            }
            str+=jusg;

        }
        cout<<str;
        return str[k-1];
    }
};
