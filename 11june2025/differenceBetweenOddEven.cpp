#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
  string s;
  cout << "Enter string : ";
  cin >> s;
  unordered_map<char, int> mp;
  for(char c : s)
  {
    mp[c]++;
  }
  int maxOdd = INT_MIN, minEven = INT_MAX;
  for(auto i : mp)
  {
    if(i.second%2 == 0) minEven = min(minEven,i.second);
    else maxOdd = max(maxOdd,i.second);
  }
  cout << "Maximum difference between odd and even frequency = " << maxOdd-minEven;
}
