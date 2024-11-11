#ifndef DivExpMD
#define DivExpMD

#include "./Expression.h"

class Div : public Expression {
private:
    Expression * x;
    Expression * y;
public:
    Div(Expression * x, Expression * y);
    Expression * diff();
    void print();
};

#endif