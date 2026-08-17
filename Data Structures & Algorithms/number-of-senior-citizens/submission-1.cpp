class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ctr=0;
        for (auto x : details){
            if (x[11]>='6'){
                if(x[11]=='6' && x[12]=='0') continue;
                ctr++;
            }
        }
        return ctr;
    }
};