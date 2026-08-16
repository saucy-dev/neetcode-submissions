class Solution {
public:
    int lengthOfLastWord(string s) {
        int leng=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ' ' && leng > 0) return leng;

            if(s[i] != ' ') leng++;
        }
        return leng;
    }
};