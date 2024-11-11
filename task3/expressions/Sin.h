#ifndef SinExpMD
#define SinExpMD

#include "./Expression.h"

class Sin : public Expression {
private:
    Expression * x;
public:
    Sin(Expression * x);
    Expression * diff();
    void print();
};

#endif