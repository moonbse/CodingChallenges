#pragma GCC optimize ("-O2")
// #include <bits/stdc++.h>
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
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

template<typename T>
void print_old(vector<T>vec){
    for(int i=0; i< vec.size(); i++)
      cout<< vec[i]<<" ";
}
//  prints any type which supports iterators...
template <class T>
void print(T& c){
   for( typename T::iterator i = c.begin(); i != c.end(); i++ ){
      std::cout << *i << " ";
   }
   cout<< "\n";
}
// void f(const vector< int >& v) {
// int r = 0;
// tr(v, it) {
// r += (it)(*it);
// }
// return r;
// }
typedef vector< int > vi;
typedef pair< int,int > pii;
typedef vector<string> vs;
typedef vector<vi> vv;
#define sz(a) int((a).size())
#define pb push_back
#define forn(n) for(int i =0 ; i< n; i++)
#define all(c) c.begin(), c.end()
// #define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define ll long long
const int inf = 1e9 +5;

vector<char> gp[27];
stack<char>order;

int Normalise(char x){
    return x - 'a' + 1;
}
char AntiNormal(int x){
    return x + 'a' -1;
}

void setRange(std::bitset<100> &myBitset, int start, int end) {
    for (int i = start; i <= end; ++i) {
        myBitset.set(i, true);
    }
}

// Function to unset a range of bits in a bitmask
void unsetRange(std::bitset<100> &myBitset, int start, int end) {
    for (int i = start; i <= end; ++i) {
        myBitset.set(i, false);
    }
}


// a more efficient implementation would be to find each pair reachable by a cop
// and finally merge the ranges and count, 

// for merge: overlapping ranges, not overlapping ranges

// writing custom comparator

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
       int x, y, M;

       cin >> M >> x >> y;
       vi cops;
       int dist = x*y;
      
       int hn;
       int minR, maxR;
      
       bitset<100> allHouses = 0;
       
       forn(M){
        cin >> hn;

        minR =  max( 1, hn - dist);
        maxR =  min(100, hn + dist);
        setRange(allHouses, minR-1, maxR-1);
       
       }  
       cout << 100 - allHouses.count() << "\n";
       

    }
    
    return 0;
}