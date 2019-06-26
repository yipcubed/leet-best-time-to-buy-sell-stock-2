#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <climits>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if (prices.empty()) return 0;
      // stack<int> buy;
      // stack<int> sell;
      int maxp = 0;
      // int boughtAt = 0;
      // int boughtPrice = prices[0];
      //cout << "Bought at " << boughtAt << " with a price of " << boughtPrice << ", max profit is " << maxp << endl;
      // buy.push(0);
      for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] > prices[i-1]) {
          //cout << "Sell at "  << i << " with a price of " << prices[i] << endl;
          // if (! sell.empty() && sell.top() == i-1)
          //   sell.pop();
          // sell.push(i);
          maxp += prices[i] - prices[i-1];
        } else {
          // boughtAt = i;
          // boughtPrice = prices[i];
          // if (! buy.empty() && buy.top() == i-1)
          //   buy.pop();
          // buy.push(i);
          //cout << "Bought at " << boughtAt << " with a price of " << boughtPrice << ", max profit is " << maxp << endl;
        }
      }
      // // Last operation cannot be buy
      // if (!buy.empty() && buy.top() == prices.size() - 1)
      //   buy.pop();
      // // all buys in reverse order
      // while (!buy.empty()) {
      //   cout << "Buy at " << buy.top() << " with price " << prices[buy.top()] << endl;
      //   buy.pop();
      // }
      // // all sells in reverse order
      // while (!sell.empty()) {
      //   cout << "Sell at " << sell.top() << " with price " << prices[sell.top()] << endl;
      //   sell.pop();
      // }
      return maxp;
    }
};

void test1() {
  Solution S;
  vector<int> v1{7,1,5,3,6,4};
  cout << "7?" << S.maxProfit(v1) << endl;

  vector<int> v2{7,1,5,3,6,8,10};
  cout << "11?" << S.maxProfit(v2) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}