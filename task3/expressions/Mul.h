#ifndef MulExpMD
#define MulExpMD

#include "./Expression.h"

class Mul : public Expression {
private:
    Expression * x;
    Expression * y;
public:
    Mul(Expression * x, Expression * y);
    Expression * diff();
    void print();
};

#endif