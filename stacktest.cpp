#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int minPeak(stack<int>& in_stk, int min) {
  if(in_stk.empty()) {
    return min;
  }
  else {
    int curr = in_stk.top();
    in_stk.pop();

    int passMin = (curr < min) ? curr : min;
    int resultMin = minPeak(in_stk,passMin);

    in_stk.push(curr);
    return resultMin;
  }
}

int main() {
  cout << "Stack Test:" << endl;
  stack<int> stk;
  stk.push(321);
  stk.push(205);
  stk.push(245);
  stk.push(267);
  stk.push(278);
  stk.push(489);
  int startMin = stk.top();
  int result = minPeak(stk,startMin);
  cout << "Result: " << result << endl;
  
  return 0;
}
