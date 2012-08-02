#ifndef ICONTROLLABLE_HPP
#define ICONTROLLABLE_HPP

class IControllable {
  public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

#endif
