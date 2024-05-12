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

    void nextPermutation(vector<int>& nums) {
        // cout << next_permutation(nums.begin(), nums.end());
        if(nums.size() == 1){
           return;
        }
        

        int i = nums.size()-2;
        int currLowestDiffIndex = -1;

        while(i >= 0){
              int lowestDiff = numeric_limits<int>::max();
              int lowestDiffIndex = -1;

              for(int j = nums.size()-1; j > i; j--){
                if(nums[j] > nums[i]){
                    if(lowestDiff > nums[j] - nums[i]){
                        lowestDiffIndex = j;
                        lowestDiff = nums[j] - nums[i];
                    }
                }
              }

              if(lowestDiffIndex != -1){
                int swap = nums[i];
                nums[i] = nums[lowestDiffIndex];
                nums[lowestDiffIndex] = swap;
                reverse(nums.begin() + i + 1, nums.end());
        
                return;
              }else if (i == 0){
                 reverse(nums.begin(), nums.end());
                 return;
              }else{
                i--;
              }
       
        }


    }


    string getPermutation(int n, int k) {
        vector<int> vec;
        for(int i = 1; i <= n; i++){
           vec.push_back(i);
        }

        while(k-1 > 0){
            nextPermutation(vec);
            k--;
        }

        string res = "";

        for(int i = 0; i < vec.size(); i++){
            res.append(to_string(vec[i]));
        }
        return res;


    }
};