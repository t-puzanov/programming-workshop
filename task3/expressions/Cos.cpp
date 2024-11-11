#include <iostream>

#include "./Expression.h"

#include "./Mul.h"
#include "./Number.h"
#include "./Sin.h"
#include "./Cos.h"


Cos::Cos(Expression * x) {
    this->x = x;
}

Expression * Cos::diff() {
    Expression * dx = this->x->diff();

    Expression * df = new Mul(new Number(-1), new Sin(this->x));

    return new Mul(df, dx);
}

void Cos::print() {
    std::cout << "Cos(";
    this->x->print();
    std::cout << ")";
}
