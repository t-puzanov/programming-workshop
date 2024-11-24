#ifndef CosExpMD
#define CosExpMD

#include "./Expression.h"

class Cos : public Expression {
private:
    Expression * x;
public:
    Cos(Expression * x);
    Expression * diff();
    void print();
};

#endif