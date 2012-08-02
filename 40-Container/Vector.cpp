#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  /*
   * a few example functions on vectors
   */
  cout << "v.empty() returned " << v.empty() << endl;
  cout << "v.max_size() returned " << v.max_size() << endl;
  cout << "v.size() returned " << v.size() << endl;

  /*
   * pushing 3 values at the end of the vector
   */
  for(int i = 0; i < 3; ++i) {
    v.push_back((i * 42) % 5);
    cout << "v.push_back(" << (i * 42) % 5 << ")" << endl;
  }

  cout << "v.size() returned " << v.size() << endl;

  /*
   * using an iterator of type vector<int>::iterator
   */
  for(auto it = v.cbegin(); it != v.cend(); ++it) {
    cout << "iterator: " << *it << endl;

    if(*it == 2) {
      cout << "found 2" << endl;
    }
  }

  cout << "v.size() returned " << v.size() << endl;
}
