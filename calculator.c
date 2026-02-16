#include <stdio.h>
int main() {
    float a, c, d;
    char b;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter symbol (+ - * /): ");
    scanf(" %c", &b);
    printf("Enter 2nd number: ");
    scanf("%f", &c);
    if (b == '+')
        d = a + c;
    else if (b == '-')
        d = a - c;
    else if (b == '*')
        d = a * c;
    else if (b == '/')
        d = a / c;
    else {
        printf("Invalid symbol");
        return 0;
    }
    printf("Result: %f\n", d);
    return 0;
}
