#include <stdio.h>
#define PI 3.141 

struct Circle {
    float r;
};
float calcArea(struct Circle c) {
    return PI * c.r * c.r;
}
float calcPerimeter(struct Circle c) {
    return 2 * PI * c.r;
}

int main() {
    struct Circle c1, c2;

    c1.r = 5.0;
    c2.r = 7.5;

    float area1 = calcArea(c1);
    float perimeter1 = calcPerimeter(c1);
    float area2 = calcArea(c2);
    float perimeter2 = calcPerimeter(c2);

    printf("Circle 1:\n","Radius: %.2f\n", c1.r ,"Area: %.2f\n", area1, "Perimeter: %.2f\n\n", perimeter1);
    printf("Circle 2:\n","Radius: %.2f\n", c2.r ,"Area: %.2f\n", area2,"Perimeter: %.2f\n", perimeter2);

    return 0;
}

