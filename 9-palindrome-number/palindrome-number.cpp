
class Solution {
public:
    bool isPalindrome(int x) {
        int long rem, sum = 0; 
        
        int temp = x;
        while (x > 0) {
            rem = x % 10;
            sum = sum * 10 + rem;
            x = x / 10;
        }
        return sum == temp; 
    }
};
