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
    void setZeroes(vector<vector<int>>& matrix) {

         int rows = matrix.size();
         int columns = matrix[0].size();
         
         bool isrowZ = false;
         bool iscolZ = false;

        for(int i = 0; i < rows; i++){
            if(matrix[i][0] == 0){
               isrowZ = true;
            }
        }

        for(int i = 0; i < columns; i++){
            if(matrix[0][i] == 0){
               iscolZ = true;
            }
        }


         for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
         }

         for(int i = rows-1; i >= 1; i--){
            for(int j = columns-1; j >= 1; j--){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                   matrix[i][j] = 0;
                }
            }
         }

         if(isrowZ){
            for(int i = 0; i < rows; i++){
                matrix[i][0] = 0;
             }
         }

        if(iscolZ){
            for(int i = 0; i < columns; i++){
               matrix[0][i] = 0;
            }
        }




         
    }
};