#include <iostream>
#include "stdio.h"

#include "./expressions/Expression.h"
#include "./expressions/Number.h"
#include "./expressions/Variable.h"
#include "./expressions/Add.h"
#include "./expressions/Mul.h"
#include "./expressions/Div.h"
#include "./expressions/Sin.h"
#include "./expressions/Cos.h"

using namespace std;


void test1() {
    cout << "--[Test #1]-------------------" << endl;
    cout << "Exp: ";

    Expression * exp = new Number(10);

    exp->print();

    Expression * exp2 = exp->diff();

    cout << endl << "Diff: ";

    exp2->print();

    cout << endl << endl;
}

void test2() {
    cout << "--[Test #2]-------------------" << endl;
    cout << "Exp: ";

    Expression * exp = new Variable('x');

    exp->print();

    Expression * exp2 = exp->diff();

    cout << endl << "Diff: ";

    exp2->print();

    cout << endl << endl;
}

void test3() {
    cout << "--[Test #3]-------------------" << endl;
    cout << "Exp: ";

    Expression * exp = new Variable('y');

    exp->print();

    Expression * exp2 = exp->diff();

    cout << endl << "Diff: ";

    exp2->print();

    cout << endl << endl;
}

void test4() {
    cout << "--[Test #4]-------------------" << endl;
    cout << "Exp: ";

    Expression * x = new Variable('x');
    Expression * y = new Number(1);

    Expression * sum = new Add(x, y);

    sum->print();

    cout << endl << "Diff: ";

    sum->diff()->print();

    cout << endl << endl;
}

void test5() {
    cout << "--[Test #5]-------------------" << endl;
    cout << "Exp: ";

    Expression * x = new Variable('x');
    Expression * y = new Number(1);

    Expression * sum = new Sub(y, x);

    sum->print();

    cout << endl << "Diff: ";

    sum->diff()->print();

    cout << endl << endl;
}

void test6() {
    cout << "--[Test #6]-------------------" << endl;
    cout << "Exp: ";

    Expression * x = new Variable('x');
    Expression * y = new Number(1);

    Expression * mul_ = new Mul(y, x);

    mul_->print();

    cout << endl << "Diff: ";

    mul_->diff()->print();

    cout << endl << endl;
}

void test7() {
    cout << "--[Test #7]-------------------" << endl;
    cout << "Exp: ";

    Expression * x = new Variable('x');
    Expression * y = new Number(1);

    Expression * div_ = new Div(y, x);

    div_->print();

    cout << endl << "Diff: ";

    div_->diff()->print();

    cout << endl << endl;
}

void test8() {
    cout << "--[Test #8]-------------------" << endl;
    cout << "Exp: ";

    Expression * sinX = new Sin(new Variable('x'));
    Expression * cosX = new Cos(new Variable('x'));

    Expression * sum = new Add(sinX, cosX);

    sum->print();

    cout << endl << "Diff: ";

    sum->diff()->print();

    cout << endl << endl;
}

void test9() {
    cout << "--[Test #9]-------------------" << endl;

    Expression * e1 = new Variable('x');
    Expression * e2 = new Number(1);

    e1->type();
    e2->type();

    cout << endl << endl;
}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();

    test9();
    
    return 0;
}
