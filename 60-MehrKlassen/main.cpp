#include <iostream>

#include "Quadrocopter.hpp"

using std::cout;
using std::endl;

int main() {
  Quadrocopter q(20);

  q.start();

  cout << "max height: " << q.getMaxHeight() << endl;
  cout << "speed: " << q.getSpeed() << endl;

  q.stop();
}
