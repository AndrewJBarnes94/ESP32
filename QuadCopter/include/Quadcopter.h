#include <string>

class Quadcopter {
public:
    Quadcopter(std::string name);
    ~Quadcopter();

    void takeoff();
    void land();
    void fly();

private:
    std::string name;
};
