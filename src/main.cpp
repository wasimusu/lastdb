#include "strlib.cpp"
#include <vector>
#include <iostream>

using namespace std;

int main() {
  string strs = "how are you doing?";
  auto res = split(strs);
  auto newstr = join(res, ' ');
  cout << newstr << endl;
  cout << res << endl;
  cout << (strs == newstr) << endl;
  return 0;
}