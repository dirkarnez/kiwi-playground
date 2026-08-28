#include <kiwi/kiwi.h>
#include <iostream>

int main() {
    // initialize the solver
    kiwi::Solver solver;
    // initialize the variables
    kiwi::Variable x = kiwi::Variable("x");
    kiwi::Variable y = kiwi::Variable("y");
    solver.addConstraint(x + y == 10);
    solver.addConstraint(x - y == 4);
    // solve the system of equations
    solver.updateVariables();
    std::cout << "x: " << x.value() << ", y: " << y.value() << std::endl;
    // Output: x: 7, y: 3
    return 0;
}
