//
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       nth_element(nums.begin(),nums.begin()+nums.size()/2,nums.end());
        return nums[nums.size()/2];
    }
};


//
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int,int>count;
      for(int num:nums){
          if(++count[num]>nums.size()/2){
              return num;
          }
      }
      return 0;
    }
};