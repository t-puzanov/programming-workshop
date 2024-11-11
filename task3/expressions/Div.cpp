#include <iostream>

#include "./Expression.h"

#include "./Mul.h"
#include "./Div.h"
#include "./Add.h"


Div::Div(Expression * x, Expression * y) {
    this->x = x;
    this->y = y;
}

Expression * Div::diff() {
    Expression * dx = this->x->diff();
    Expression * dy = this->y->diff();

    Expression * s1 = new Mul(dx, this->y);
    Expression * s2 = new Mul(this->x, dy);

    Expression * d = new Mul(this->y, this->y);

    return new Div(new Sub(s1, s2), d);
}

void Div::print() {
    std::cout << '(';
    this->x->print();
    std::cout << " / ";
    this->y->print();
    std::cout << ')';
}