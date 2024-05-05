#include "../include/quadratic_equation.h"

float solve_equation(float a, float b, float c) {  // решает квадратное уравнение ax^2 + bx + c = 0
    float discriminant;  // дискриминант

    discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant < 0) 
        return 1;

    else if (discriminant == 0) {
        float x = (-b / (2 * a));  // решение уравнения
        printf("x = %f \n", x);  // печать 
        return x;
    }

    else {
        float x1 = (-b + sqrt(discriminant)) / (2 * a);  // первое решение уравнения
        float x2 = (-b - sqrt(discriminant)) / (2 * a);  // второе решение уравнения

        // печать
        printf("x1 = %f\n", x1);  
        printf("x2 = %f\n", x2);
        return x1 * x2;
    }
    return 0;
}