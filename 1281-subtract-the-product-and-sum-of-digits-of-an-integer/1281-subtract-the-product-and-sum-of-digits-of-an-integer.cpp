class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int sum = 0;
        int prod=1;
        while(temp>0){
            int reminder = temp% 10;
            prod=prod* reminder;
            sum = sum + reminder;
            temp = temp/10;
        }
        int res = prod - sum;
        return res;
    }
};