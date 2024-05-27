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
    int maxProfit(vector<int>& prices) {


// how adding these lines is making code run much faster???
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int cost = prices[0];

        int currP = 0;

        int maxP = 0;

        for(int i = 1; i < prices.size(); i++){

            if(cost > prices[i]){

                cost = prices[i];
                currP = 0;

            }else if(cost < prices[i]){
                currP = prices[i] - cost;

                maxP = max(currP, maxP);
 
            }
        }
        return maxP;
    }
};