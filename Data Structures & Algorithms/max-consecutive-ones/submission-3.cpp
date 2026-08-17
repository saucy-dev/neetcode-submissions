class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current=0,ma=0;
        for(int i:nums){
            if(i==1) current++;
            else current=0;
            ma=max(ma,current);
        }
        return ma;
    }
};