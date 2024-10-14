#include <iostream>

#include "./Expression.h"

#include "./Add.h"


Add::Add(Expression * x, Expression * y) {
    this->x = x;
    this->y = y;
}

Expression * Add::diff() {
    Expression * dx = this->x->diff();
    Expression * dy = this->y->diff();

    return new Add(dx, dy);
}

void Add::print() {
    std::cout << '(';
    this->x->print();
    std::cout << " + ";
    this->y->print();
    std::cout << ')';
}


Sub::Sub(Expression * x, Expression * y) {
    this->x = x;
    this->y = y;
}

Expression * Sub::diff() {
    Expression * dx = this->x->diff();
    Expression * dy = this->y->diff();

    return new Sub(dx, dy);
}

void Sub::print() {
    std::cout << '(';
    this->x->print();
    std::cout << " - ";
    this->y->print();
    std::cout << ')';
}
