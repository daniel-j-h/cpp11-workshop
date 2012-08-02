#ifndef QUADROCOPTER_HPP
#define QUADROCOPTER_HPP

class Quadrocopter {
  public:
    Quadrocopter(const int&);
    ~Quadrocopter();

    int getMaxHeight() const;

  private:
    int maxHeight = 10;
};

#endif
