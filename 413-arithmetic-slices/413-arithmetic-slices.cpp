class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int res = 0;
        int pat = INT_MAX;
        for(int i = 1; i<size;i++){
            int newPat = nums[i] - nums[i-1];
            if(newPat==pat){ res += count++;
                            }
            else{
                pat=newPat;
                count=1;
            }
        }
        return res;
    }
};