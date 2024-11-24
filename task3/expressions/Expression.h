#ifndef ExpressionExpMD
#define ExpressionExpMD

#include <iostream>

class Expression {
public:
    virtual Expression * diff() = 0;
    virtual void print() = 0;

    virtual void type() {
        std::cout << "Expression" << "\n";
    }
};

#endif
