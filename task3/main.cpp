#include <iostream>

#include "./expressions/Expression.h"
#include "./read_expression.h"

using namespace std;

int main() {
    Expression * exp = read_expression((char *) "Sin(x + y) - Cos(x * x * x)");

    exp->print();

    cout << "\n";

    exp->diff()->print();

    cout << "\n";

    return 0;
}
