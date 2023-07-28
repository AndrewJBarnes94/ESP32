#include "Quadcopter.h"
#include <iostream>

Quadcopter::Quadcopter(std::string name): name(name) {}

Quadcopter::~Quadcopter() {}

void Quadcopter::takeoff() {
    std::cout << name << " is taking off.\n";
}

void Quadcopter::land() {
    std::cout << name << " is landing.\n";
}

void Quadcopter::fly() {
    std::cout << name << " is flying.\n";
}
