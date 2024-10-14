#include <iostream>

#include "./Number.h"
#include "./Expression.h"


Number::Number(double value) {
    this->value = value;
}

Expression * Number::diff() {
    return new Number(0.0);
}

void Number::print() {
    std::cout << this->value;
}
