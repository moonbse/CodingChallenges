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


// Kadame's algorithms works only with arrays having both positive and negative numbers, if all are negative 
// it will return 0;
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



// golang solution

// func maxSubarraySum(arr []int) int {
//     currentSum := arr[0]
//     maxSum := arr[0]
//     for i := 1; i < len(arr); i++ {
//         currentSum = max(arr[i], currentSum + arr[i])
//         maxSum = max(maxSum, currentSum)
//     }
//     return maxSum
// }

// func max(a, b int) int {
//     if a > b {
//         return a
//     }
//     return b
// }