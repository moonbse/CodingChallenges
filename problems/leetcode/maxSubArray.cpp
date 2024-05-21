#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <bitset>
#include<stack>
#include <sstream>
using namespace std;


class Solution {
public:
//  dp based solution is called kadame solution
// starting solutions

// Great questions to understand divide and conquer, dp, kadame's algo,
//  thinking in first principle starting from (On*2) solution >> recursive solution 
// >> optimizing recursion using memoization >> 2d dp as tabulation >> to 1d DP >> divide and conquer.
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> dp(size, 0);
        dp[0] = nums[0];
       int ans = dp[0];
       for (int i = 1; i < size; i++) {
          dp[i] = max(nums[i], nums[i] + dp[i - 1]);
          ans = max(ans, dp[i]);
       }
      return ans;
    }


};