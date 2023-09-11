class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
            int m=nums[0];
        for(int i=1;i<nums.size();i++){
                if(nums[i]!=m){
                    nums[j]=nums[i];
                    j++;
                 }
                 m=nums[i];
        }
        return j;
        
    }
};