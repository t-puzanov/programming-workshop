#ifndef AddExpMD
#define AddExpMD

#include "./Expression.h"

class Add : public Expression {
private:
    Expression * x;
    Expression * y;
public:
    Add(Expression * x, Expression * y);
    Expression * diff();
    void print();
};


class Sub : public Expression {
private:
    Expression * x;
    Expression * y;
public:
    Sub(Expression * x, Expression * y);
    Expression * diff();
    void print();
};

#endif