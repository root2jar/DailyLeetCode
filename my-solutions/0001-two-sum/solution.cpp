class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target){
      unordered_map<int,int> seen_numbers;
      for(int i=0;i<nums.size();i++){
          int current_num=nums[i];
          int complement=target-current_num;
          if(seen_numbers.find(complement)!=seen_numbers.end()){
              return {seen_numbers[complement],i};
          }
          seen_numbers[current_num]=i;
      }
      return{};
    }
};  

