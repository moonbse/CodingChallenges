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

// Reached three boundary solution on my own, but should have thought harder, dutch national flag algorithm, just place 0s and 2s right and 1s will be sorted on their own


class Solution {
public:

  
    void sortColors(vector<int>& nums) {
    
        int low = 0 , mid = 0;
        int high = nums.size()-1;


        // cout << high << "\n";
        

        while(mid <= high){

            if(nums[mid] == 0){
              swap(low, mid, nums);
              low++,
              mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
               swap(mid, high, nums);
               high--;
            }
        }
    }

    void swap(int i, int j, vector<int>& nums){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        return;
    }

};