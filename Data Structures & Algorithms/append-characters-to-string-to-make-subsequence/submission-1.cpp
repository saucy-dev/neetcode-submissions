class Solution {
public:
    int appendCharacters(string s, string t) {
       int ctr=0;
       for(int i=0;i<s.size();i++){
        if(ctr< t.size() && s[i]==t[ctr] ) ctr++;
        
       } 
       return (t.size()-ctr);
    }
};