#include <iostream>

#include "./Expression.h"

#include "./Add.h"
#include "./Mul.h"


Mul::Mul(Expression * x, Expression * y) {
    this->x = x;
    this->y = y;
}

Expression * Mul::diff() {
    Expression * dx = this->x->diff();
    Expression * dy = this->y->diff();

    Expression * s1 = new Mul(dx, this->y);
    Expression * s2 = new Mul(this->x, dy);

    return new Add(s1, s2);
}

void Mul::print() {
    std::cout << '(';
    this->x->print();
    std::cout << " * ";
    this->y->print();
    std::cout << ')';
}
