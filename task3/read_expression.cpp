#include <stack>

#include <stdio.h>

#include "./expressions/Add.h"
#include "./expressions/Mul.h"
#include "./expressions/Div.h"
#include "./expressions/Sin.h"
#include "./expressions/Cos.h"
#include "./expressions/Number.h"
#include "./expressions/Variable.h"
#include "./read_expression.h"

int isFn(char * str, char * fnName, int j) {
    int i = 0;

    while ((str[j + i] == fnName[i]) && fnName[i] != '\0') {
        i++;
    }

    return (fnName[i] == '\0') && (str[j + i] == '(' || str[j + i] == ' ');
}

Expression * read_expression_recursive(char * str, int & i) {
    Expression * e1, * e2;

    while (str[i] == ' ') i++;

    char c = str[i];

    if (c == '\0') {
        return new Number(0);   
    }
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        char n = str[i + 1];

        if ((n < 'a' || n > 'z') && (n < 'A' || n > 'Z')) {
            e1 = new Variable(c);
            i++;
        } else {
            if (isFn(str, (char *) "Sin", i)) {
                i += 4;
                e1 = new Sin(read_expression_recursive(str, i));
            } else if (isFn(str, (char *) "Cos", i)) {
                i += 4;
                e1 = new Cos(read_expression_recursive(str, i));
            } else {
                printf("error: read_expression fn \n");
                exit(0);
            }
        }
    } else if (c == '(') {
        i++;
        e1 = read_expression_recursive(str, i);
    } else if (c == '-' || (c >= '0' && c <= '9')) {
        float n;

        sscanf(str + i, "%f", &n);

        e1 = new Number((double) n);

        if (c == '-') i++;

        while (((str[i] >= '0' && str[i] <= '9') || str[i] == '.')) {
            i++;
        }
    } else {
        printf("error: read_expression \n");
        exit(0);
    }

    while (str[i] == ' ') i++;

    c = str[i];

    if (c == '\0' || str[i] == ')') {
        i++;
        return e1;
    }

    if (c != '+' && c != '-' && c != '*' && c != '/') {
        printf("error: read_expression \n");
        exit(0);
    }

    i++;

    e2 = read_expression_recursive(str, i);

    if (c == '+') {
        return new Add(e1, e2);
    }

    if (c == '-') {
        return new Sub(e1, e2);
    }

    if (c == '*') {
        return new Mul(e1, e2);
    }

    if (c == '/') {
        return new Div(e1, e2);
    }

    return new Number(0);
}

Expression * read_expression(char * str) {
    int i = 0;
    return read_expression_recursive(str, i);
}