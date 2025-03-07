class Solution {
 public:
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;

    for (int i = left; i <= right; i++)
      if (selfDividingNumbers(i))
        ans.push_back(i);

    return ans;
  }
  bool selfDividingNumbers(int num) {
    for (int n = num; n > 0; n /= 10)
      if (n % 10 == 0 || num % (n % 10) != 0)
        return false;
    return true;
  }
};