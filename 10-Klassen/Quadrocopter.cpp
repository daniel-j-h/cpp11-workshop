#include <iostream>

#include "Quadrocopter.hpp"


Quadrocopter::Quadrocopter(const int& maxHeight_) : maxHeight(maxHeight_) {

  std::cout << "Quadrocopter(" << maxHeight << ")" << std::endl;
}

Quadrocopter::~Quadrocopter() {

  std::cout << "~Quadrocopter(" << maxHeight << ")" << std::endl;
}
