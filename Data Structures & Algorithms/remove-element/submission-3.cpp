class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int siz=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[siz]=nums[i];
                siz++;
                } 
        }
        return siz;
    }  
};