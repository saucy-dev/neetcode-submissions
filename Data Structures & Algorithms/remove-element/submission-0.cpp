class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int siz=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i]=-1;
                siz--;
                } 
        }
        sort(nums.begin(),nums.end(),greater<int>());
        return siz;
    }  
};