#ifndef VariableExpMD
#define VariableExpMD

#include "./Expression.h"

class Variable : public Expression {
private:
    char name;
public:
    Variable(char name);
    Expression * diff();
    void print();
};

#endif