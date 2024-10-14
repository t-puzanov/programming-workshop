#include <iostream>
#include "stdio.h"

#include "./expressions/Expression.h"
#include "./expressions/Number.h"
#include "./expressions/Variable.h"
#include "./expressions/Add.h"

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

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
}
