#include "divideExpression.h"
#include "exception/undefinedNumberException.h"
DivideExpression::DivideExpression(Expression<double> *x, Expression<double> *y) : BinaryExpression<double> (x, y) {}

double DivideExpression::solve() {
    if(this->y->solve() != 0)
       return this->x->solve() / this->y->solve();
    else
        throw UndefinedNumberException<double>(this->y->solve());
}
