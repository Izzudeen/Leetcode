class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i =0;i<nums.size()-1;i++){
            for(int j = i+1; j<nums.size();j++){
                int sum =0;
                sum = nums[i]+nums[j];
                if(sum==target){
                   std::vector<int> ints = {i,j};
                    return ints;
                }
        }
            
    }
        std::vector<int> ints = {NULL,NULL};
        return ints;
    }
};