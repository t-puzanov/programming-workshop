#include <iostream>

#include "./Expression.h"

#include "./Mul.h"
#include "./Sin.h"
#include "./Cos.h"


Sin::Sin(Expression * x) {
    this->x = x;
}

Expression * Sin::diff() {
    Expression * dx = this->x->diff();

    Expression * df = new Cos(this->x);

    return new Mul(df, dx);
}

void Sin::print() {
    std::cout << "Sin(";
    this->x->print();
    std::cout << ")";
}
