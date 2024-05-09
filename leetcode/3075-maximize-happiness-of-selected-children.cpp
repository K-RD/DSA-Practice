class Solution {
public:
  long long maximumHappinessSum(vector<int>& happiness, int k) {
    sort(happiness.begin(), happiness.end());
    long counter = 0;
    long long sum = 0;
    long len = happiness.size();
    while(k--){
      long long max = happiness[len-counter-1] - counter;
      if(max <= 0)break;
      sum += max;
      happiness[len-counter-1] = 0;
      ++counter;
    }
    return sum;
  }
};
