class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>boxCount;
        int maxBalls = 0;
        for(int i = lowLimit; i<=highLimit; ++i){
            int box = digitSum(i);
            boxCount[box]++;
            maxBalls = max(maxBalls,boxCount[box]);
        }
        return maxBalls;
    }
     int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};
