#ifndef FLYINGOBJECT_HPP
#define FLYINGOBJECT_HPP

class FlyingObject {
  public:
    FlyingObject() : FlyingObject(0.f) { }
    FlyingObject(const float& speed_) : speed(speed_) { }

    int getSpeed() const { return speed; }

  private:
    int speed = 0.f;
};

#endif
