#include <iostream>

#include "./Expression.h"

#include "./Variable.h"
#include "./Number.h"


Variable::Variable(char name) {
    this->name = name;
}

Expression * Variable::diff() {
    return new Number((int) this->name == 'x');
}

void Variable::print() {
    std::cout << this->name;
}

void Variable::type() {
    std::cout << "Variable" << "\n";
}