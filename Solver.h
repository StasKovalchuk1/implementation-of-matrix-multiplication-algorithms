#ifndef NASOBENI_MATIC_SOLVER_H
#define NASOBENI_MATIC_SOLVER_H

#include "Matrix.hpp"
#include <iomanip>

class Solver {
public:
    Matrix matrix1;
    Matrix matrix2;
    Solver(Matrix m1, Matrix m2) : matrix1(m1), matrix2(m2){}
    virtual Matrix multiplyAndDisplayTime();
    virtual Matrix multiplyAndDisplayResultAndTime();
    void printMatrix(const Matrix& matrix);
    virtual Matrix multiply() = 0;
};


#endif //NASOBENI_MATIC_SOLVER_H
