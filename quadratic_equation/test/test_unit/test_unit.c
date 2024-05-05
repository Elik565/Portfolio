#include "test_unit.h"
#include "../../include/quadratic_equation.h"

char INCORRECT_SOLUTION[] = "solve_equation: The solution of the equation is incorrect!";
char NOT_REAL_NUMBERS[] = "solve_equation: There is no solution in real numbers!";

int test_unit(char **message) {
    if (test_solve_equation(message))
        return 1;
}

int test_solve_equation(char **message) {
    // неправильное решение
    float a = 1, b = 4, c = 4;
    float exit_status = solve_equation(a, b, c);

    if (exit_status != -2){
        *message = INCORRECT_SOLUTION;
        return 1;
    }

    a = 2;
    b = 5;
    c = 3;
    exit_status = solve_equation(a, b, c);

    if (exit_status != 1.5){
        *message = INCORRECT_SOLUTION;
        return 1;
    }

    // отрицательный дискриминант
    b = 3;
    c = 5;
    exit_status = solve_equation(a, b, c);

    if (exit_status != 1){
        *message = NOT_REAL_NUMBERS;
        return 1;
    }

    return 0;
}