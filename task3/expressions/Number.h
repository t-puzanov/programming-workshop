#ifndef NumberExpMD
#define NumberExpMD

#include "./Expression.h"

class Number : public Expression {
private:
    double value;
public:
    Number(double value);
    Expression * diff();
    void print();
};

#endif