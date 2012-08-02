#ifndef QUADROCOPTER_HPP
#define QUADROCOPTER_HPP

#include <iostream>

#include "FlyingObject.hpp"
#include "IControllable.hpp"


class Quadrocopter : public IControllable, public FlyingObject {
  public:
    Quadrocopter(const int&);
    ~Quadrocopter();

    int getMaxHeight() const { return maxHeight; };

    void start();
    void stop();

  private:
    int maxHeight = 10;
};


Quadrocopter::Quadrocopter(const int& maxHeight_) : FlyingObject(50.f), maxHeight(maxHeight_) {
  std::cout << "Quadrocopter(" << maxHeight << ")" << std::endl;
}

Quadrocopter::~Quadrocopter() {
  std::cout << "~Quadrocopter(" << maxHeight << ")" << std::endl;
}

void Quadrocopter::start() {
  std::cout << "starting" << std::endl;
}

void Quadrocopter::stop() {
  std::cout << "stopping" << std::endl;
}


#endif
