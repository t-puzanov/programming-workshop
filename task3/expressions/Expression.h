#ifndef ExpressionExpMD
#define ExpressionExpMD

class Expression {
public:
    virtual Expression * diff() = 0;
    virtual void print() = 0;
};

#endif